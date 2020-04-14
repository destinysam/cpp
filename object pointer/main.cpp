#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    int b;
    int c;
    public:
    void get_data(int ,int,int);
    void display();
};
void A::get_data(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
}
void A::display()
{
    cout<<a<<" "<<b<<" "<<c<<endl;
}
int main()
{
    A *p,obj1; // *p IS A OBJECT POINTER
    p= &obj1;
    p->get_data(20,30,40);
    p->display();
    return 0;
}