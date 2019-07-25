#include <iostream>
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:TO OVERLOAD MINUS OPERATOR*/
using namespace std;
class operatorr
{
    int a;
    int b;
public:
    void getdata()
    {
        cout<<"enter the values"<<endl;
        cin>>a>>b;
    }
    void display()
    {
        cout<<a<<endl<<b<<endl;
    }
    operatorr operator-() /*OVERLOADING FUNCTION*/
    {
        operatorr temp;
        temp.a=-a;/*ASSIGNING RIGHT VALUE TO LEFT*/
        temp.b=-b;/*ASSIGNING RIGHT VALUE TO LEFT*/
        return(temp);
    }
};
int main()
{
    operatorr c1,c2;
    c1.getdata();
    c2=c1.operator-();/*CALL TO OVERLOADING FUNCTION*/
    //c2=-c1;//ALTERNATIVE FUNCTION CALL TO OVERLOADING FUNCTION*/
    c2.display();
    return 0;
}
