#include <iostream>
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:SINGLE INHERITENCE USING PUBLIC ACCESS SPECIFIER*/
using namespace std;
class person /*BASE CLASS*/
{

public:
    int a,b,c,d,e;/*READY TO INHERITABLE*/
    void setdata();/*FUNCTION DECLERATION*/
    void add();/*FUNCTION DECLERATION*/
    void show_a(void);
    int get_a(void);
};
class student:public person /*DERIVING THE CLASS  STUDENT FORM B*/
{
public:
    void mul();
    void div();
    void display();
};
void person::setdata(void)
{
    a=20;
    b=10;
}
void person::add()
{
    c=get_a()+b;
}
void student::mul()
{
    d=a*b;
}
void person::show_a()
{
    cout<<"a="<<a<<endl;
}
int person ::get_a()
{
    return a;
}
void student::div()
{
    e=a/b;
}
void student::display()
{
    cout<<"addition of two nos is"<<c<<endl;
    cout<<"multiplication of two nos is "<<d<<endl;
    cout<<"divsion of two nos is "<<e<<endl;
}
int main()
{
    student operation;
    operation.get_a();
    operation.setdata();
    operation.add();
    operation.mul();
    operation.div();
    operation.display();
    return 0;
}
