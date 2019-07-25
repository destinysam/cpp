#include <iostream>
//CODED BY SAM @SAMEER//
//PROGRAM TAKING NUMBERS AS INPUT FROM USER AND PRINT THEM IN WORDS//
using namespace std;

int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    string num[9]={"one","two","three","four","five","six","seven","eight","nine"};
    for(int n=a;n<=b;n++)
    {
        if(n<=9)
        {
            cout<<num[n-1]<<endl;
        }
        else if(n%2==0)
            cout<<"even"<<endl;
        else
            cout<<"odd"<<endl;
    }
    return 0;
}
