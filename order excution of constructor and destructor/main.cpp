#include <iostream>
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:ORDER EXCUTIO OF CONSTRUCTORS AND DESTRUCTORS*/
using namespace std;
class person/*BASE CLASS*/
{
public:
    person()
    {
        cout<<"CONSTRUCTOR OF PERSON CLASS CALLED"<<endl;
    }
    ~person()
    {
        cout<<"DESTRUCTOR OF PERSON CLASSCALLED"<<endl;
    }
    };
    class empolyee:public person/*DERIVED CLASS*/
    {
public:
    empolyee()
    {
        cout<<"CONSTRUCTOR OF EMPOLYEE CLASS CALLED"<<endl;
    }
    ~empolyee()
    {
        cout<<"DESTRUCTOR OF EMPLYEE CLASS CALLED"<<endl;
    }
    };
int main()
{
    empolyee sameer;/*WHEN OBJECT CREATED CONSTRUCTOR AUTOMATICALLY CALLED*/
    return 0;
}
