#include <iostream>
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:PUBLIC INHERITENCE*/
using namespace std;
class operation/*BASE CLASS*/
{
protected:
    int a;
    int b;
public:
    int c;
    void getdata()
    {
        cout<<"ENTER THE VALUE OF A AND B"<<endl;
        cin>>a>>b;
    }
    int  multipli()
    {
     c=a*b;
    return(c);
    }
};
class multi:public operation/*DERIVING THE MULTI CLASS FROM BASE CLASS*/
/*DERIVED CLASS WILL ACCESS THE PUBLIC AND PROTECTED MEMBERS OF BASE CLASS*/
{
public:
    void display()
    {
        cout<<"MULTIPLICATION OF TWO NOS IS"<<c<<endl;
    }
};
int main()
{
    multi c1;
    c1.getdata();/*CALL TO MEMBER FUNCTION OF BASE CLASS*/
    c1.multipli();/*CALL TO MEMBER FUNCTION OF BASE CLASS*/
    c1.display();/*CALL TO MEMBER FUNCTION OF DERIVED CLASS*/
    return 0;
}
