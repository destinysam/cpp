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
    public:
    complex() // CONSTRUCTOR
    {
        varieble1=0;
    }
    void getdata(); //FUNCTION DECLERTION
    void display();
   complex operator ++() //PRE INCREAMENT 
    {
        complex obj5;
        obj5.varieble1 = ++varieble1;
        return obj5;
    }
    complex operator ++(int) //POST INCREAMENT
    {
        complex obj5;
        obj5.varieble1=varieble1++;
        return obj5;
    }
};
void complex::getdata()
{
    cout<<"TYPE THE VALUE OF VARIEBLES :"<<endl;
    cin>>varieble1;

}
void complex::display()
{
    cout<<varieble1<<endl;
}
int main()
{
    complex obj1,obj2,obj3;
    obj1.getdata();
    obj3= ++obj1; //obj3 = obj1.addition(obj2)
    obj3.display();
    obj3=obj1++;
    obj3.display();
    return 0;
}