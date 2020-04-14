#include<iostream>
using namespace std;
//CODED BY SAM@SAMEER
//EMAIL:SAMS44802@GMAIL.COM
//DATA 04/12/2019
//PROGRAM:ADDITION OF TWO OBJECTS OF TWO DIFFERENT CLASSES
class B; //FORWARD DECLERATION
class A 
{
    protected:
    int a;
    int b;
    public:
    void getdata();
    friend void add_data(A,B);
}obj1;
void A::getdata()
{
    cout<<"TYPE THE TWO NUMBERS :"<<endl;
    cin>>a>>b;
}
class B
{
    protected:
    int c;
    int d;
    public:
    void getdata();
    friend void add_data(A,B);
}obj2;
void B::getdata()
{
    cout<<"TYPE THE TWO NUMBERS :"<<endl;
    cin>>c>>d;
}
void add_data(A obj3,B obj4)
{
  cout<<"ADDITION OF FIRST TWO NOS"<<endl;
  cout<<obj3.a+obj4.c<<endl;
  cout<<"ADDITION OF SECOND TWO NOS"<<endl;
  cout<<obj3.b+obj4.d<<endl;
}
int main()
{
 obj1.getdata();
 obj2.getdata();
 add_data(obj1,obj2);
}