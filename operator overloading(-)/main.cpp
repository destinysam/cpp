#include<iostream>
//CODED BY SAM@SAMEER
//EMAIL:SAMS44802@GMAIL.COM
//DATE:18/12/2019
//PROGRAM: TO OVERLOAD - OPERATOR
using namespace std;
class complex //CLASS DEFINITION
{
    private:
    int varieble1;
    int varieble2;
    public:
    complex() // CONSTRUCTOR
    {
        varieble1=0;
        varieble2=0;
    }
    void getdata(); //FUNCTION DECLERTION
    void display();
    complex operator -(complex obj4) //OPERATOR OVERLOADING FUNCTION
    {
        complex obj5;
        obj5.varieble1 = varieble1-obj4.varieble1;
        obj5.varieble2 = varieble2-obj4.varieble2;
        return obj5;
    }
};
void complex::getdata()
{
    cout<<"TYPE THE VALUE OF VARIEBLES :"<<endl;
    cin>>varieble1>>varieble2;

}
void complex::display()
{
    cout<<varieble1<<"-"<<varieble2<<"i"<<endl;
}
int main()
{
    complex obj1,obj2,obj3;
    obj1.getdata();
    obj2.getdata();
    obj3=obj1-obj2; //obj3 = obj1.addition(obj2)
    obj3.display();
    return 0;
}