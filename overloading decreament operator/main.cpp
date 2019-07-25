#include <iostream>
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:TO OVERLOAD DECREAMENT OPERATOR*/
using namespace std;
class decreament
{
    int var;
public:
    void getdata()
    {
        cout<<"ENTER THE VALUE OF VAR"<<endl;
        cin>>var;
    }
    void display()
    {
        cout<<var<<endl;
    }
    decreament operator--()/*OVERLOADING  DECREAMENT FUNCTION*/
    {
     decreament temp;
     temp.var=--var;
     return(temp);
    }
};
int main()
{
    decreament obj1,obj2;
    obj1.getdata();
    obj2=obj1.operator--();/*FUNCTION CALL TO OVERLOADING FUNCTION*/
    //obj2=--obj1 ALTERNATIVE FUNCTION CALL TO OVERLOADIND FUNCTION*/
    obj2.display();
    return 0;
}
