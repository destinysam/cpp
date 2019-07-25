#include <iostream>
#include <string.h>
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:SINGLE INHERITENCE USING PUBLIC ACCESS SPECIFIER*/
using namespace std;
class B /*BASE CLASS*/
{

    int a; /*PRIVATE NOT  INHERITABLE*/
public:
    int b; /*READY TO INHERITENCE*/
    void set_ab();/*FUNCTION DECLERATION*/
    int get_a(void);/*FUNCTION DECLERATION*/
    void show_a(void);/*FUNCTION DECLERATION*/
};
class D:public B /*DERIVING THE CLASS FORM B*/
{
int c;  /*PRIVATE NOT  INHERITABLE*/
public:
    void mul(void); /*FUNCTION DECLERATION*/
    void display(void);/*FUNCTION DECLERATION*/
};
void B::set_ab(void) /*USING SCOPE RESOLUTION TO ACCESS THE MEMBER FUNCTION OF CLASS B*/
{
    a=5;b=10;
}
int B:: get_a()
{
    return a;
}
void B::show_a()
{
    cout<<"a="<<a<<endl;
}
void D:: mul()
{
    c=b*get_a();
}
void  D::display()
{
cout<<"a="<<get_a()<<endl;
cout<<"b="<<b<<endl;
cout<<"c="<<c<<endl;
}
int main()
{
    D d;
    d.set_ab();
    d.mul();
    d.show_a();
    d.display();
    d.b=20; /*CHAGING THE VALUE OF B*/
    d.mul();
    d.display();
    return 0;
}
