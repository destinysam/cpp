#include <iostream>
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:TO OVERLOAD PRE INCREAMENT OPERATOR*/
using namespace std;
class increament
{
    int a;
public:
    void getdata()
    {
        cin>>a;
    }
    void display()
    {
        cout<<a;
    }
    increament operator++()/*OVERLOADING FUNCTION*/
    {
        increament temp;
        temp.a=++a;/*PRE_INCREAMENTING THE a*/
        return(temp);
    }
};
int main()
{
    increament c1,c2;
    c1.getdata();
    c2=c1.operator++();/*FUNCTION CALL TO OVERLOADING FUNCTION*/
   /* c2=++c1; ALTERNATIVE FUNCTION CALL TO OVERLOADING FUNCTION*/
    c2.display();
    return 0;
}
