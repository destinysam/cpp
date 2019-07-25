#include <iostream>
//CODED BY SAM@SAMEER//
//USING FRIEND FUNCTION TO ADD TWO OBJECTS IN TWO DIFFRENT CLASSES//
using namespace std;
class yasir; //FORWARD DECLARATION//
class sameer
{
    int a;
public:
    void getdata(int ac) //FUNCTION DEFINITION//
    {
        a=ac;
    }
    friend void display(sameer,yasir);//FRIEND FUNCTION DECLARATION//
};
class yasir
{
    int b;
public:
    void getdata(int ab)
    {
        b=ab;
    }
    friend void display(sameer,yasir); //FREIND FUNCITON DECLARATION//
};
void display(sameer ob1,yasir ob2) //FREIND FUNCTION DEFINITION//
{
    cout<<"the add of two nos is"<< ob1.a+ob2.b<<endl;
}
int main()
{
    sameer college;
    yasir secondary;
    college.getdata(32);
    secondary.getdata(12);
    display(college,secondary); //FUNCTION CALL TO FREIND FUNCTION//
    return 0;
}
