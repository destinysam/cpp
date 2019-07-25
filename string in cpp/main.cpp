#include <iostream>
#include<string>
using namespace std;

int main()
{
    string name="sameer";
    string lastname="ahmad";
    string fullname;
    fullname=name + lastname;  //concatinate of two strings by using + operator//
    cout<<fullname<<endl;
    cout<<name<<" "<<lastname<<endl;
     if(name=="sameer")           //comparing two stings with = operator//
    {
    cout<<"ACCESS GRANTED"<<endl;
    }
    else
    cout<<"ACCESS DENIED"<<endl;
    return 0;
}
