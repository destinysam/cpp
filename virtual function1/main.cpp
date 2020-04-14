#include<iostream>
using namespace std;
class A
{
    public:
   virtual void fun1();
};
class B:public A
{
    public:
    void fun1();
};
void A::fun1()
{
    cout<<"PARENT CLASS "<<endl;
}
void B::fun1()
{
  cout<<"CHILD CLASS "<<endl;
}
int main()
{
    A *pointer,obj1; 
    B obj2;          
    pointer=&obj2;   
    pointer->fun1(); 
    return 0;
}