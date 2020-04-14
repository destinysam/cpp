#include<iostream>
//CODED BY SAM & WARFAN
//EMAIL SAMS44802@GMAIL.COM
//DATE:12/12/2019
using namespace std;
class dept
{
    private:
    int a;
    int y;
    public:
    dept(int x,int y) // PARAMITERISED CONSTRUCTOR
    {
      a=x;
      this->y=y;
    }
    void show() //INSTANCE MEMBER FUNCTION
    {
        cout<<a<<" "<<y<<endl;
    }
};
int main()
{
    dept obj1(10,20); //ARGUMENTS PASSED TO CONSTRUCTOR
    obj1.show();
    return 0;
}