#include <iostream>
//CODED BY SAM @ SAMEER//
//COMPARSION OF TWO OBJECTS IN DIFFRENT CLASSES  BY USING FRIEND FUNCTION//
//EMAIL: sams44802@gmail.com//
using namespace std;
class student2; //FORWARD DECLARATION//
class student1
{
    int a;
    public:
    void getmarks(int marks)
    {
        a=marks;
    }
    friend void display(student1,student2); //FRIEND DECLARATION AND PASSING FORMAL OBJECTS//
};
class student2
{
    int b;
    public:
    void getmarks(int marks)
    {
        b=marks;
    }
    friend void display(student1,student2);//FRIEND DECLARATION//
};
void display(student1 ob1,student2 ob2)//FRIEND DEFINITION//
{
    /*cin>>ob1.a;
    cin>>ob2.b;*/
    if(ob1.a>ob2.b)
        cout<<"A IS GREATER THAN B"<<endl;
        else if(ob2.b>ob1.a)
            cout<<"B IS GREATER THAN A"<<endl;
        else
            cout<<"OBJECTS ARE SAME"<<endl;
}
int main()
{
    student1 sameer;
    student2 yasir;
    sameer.getmarks(345);
    yasir.getmarks(234);
    display(sameer,yasir); //FUNCTION CALL TO FRIEND FUNCTION//
    return 0;
}
