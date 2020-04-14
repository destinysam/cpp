#include<iostream>
using namespace std;
class A
{
    protected:
    int var;
    public:
    void getdata();
    void putdata();
}obj1;
void A::getdata()
{
    cout<<"INITITALIZE THE VARIEBLE :"<<endl;
    cin>>var;
}
int main()
{
    int *pointer;
    obj1.getdata();
    *pointer= &var;


}