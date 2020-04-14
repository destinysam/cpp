#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    void get_data();
};
void A::get_data()
{
    cout<<"HELLO WORLD!!!!"<<endl;
    cin>>a;
}
class B
{
    protected:
    int b;
    public:
    void get_data();
};
void B::get_data()
{
    cout<<"WELCOME TO PROGRAMMING WORLD:"<<endl;
    cin>>b;
}
class C:public A,public B
{
    protected:
    int c;
    public:
    void get_data();
};
void C::get_data() //OVERRIDES get_data OF  A AND B
{
 // A::get_data();
    // OR
  B::get_data();
}
int main()
{
    C obj1;
    obj1.get_data();
    return 0;
}