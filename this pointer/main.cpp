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
void A::get_data(int a,int b,int c)
{
    this->a=a;
    this->b=b;
    this->c=c;
}
void A::display()
{
    cout<<a<<" "<<b<<" "<<c<<endl;
}
int main()
{
    A obj1;
    obj1.get_data(20,30,40);
    obj1.display();
    return 0;
}