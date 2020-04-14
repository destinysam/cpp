#include<iostream>
using namespace std;
int main()
{
    int number1;
    int number2;
    cout<<"TYPE TWO INTEGERS NUMBERS :"<<endl;
    cin>>number1>>number2;
    cout<<greatest(number1,number2);
    return 0;
}
int &greatest(int x, int y)
{
    if(x>y)
    {
     return x;
    }
     else 
     return y;
}