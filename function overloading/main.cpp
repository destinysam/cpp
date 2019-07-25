#include <iostream>
#include<string>
//CODED BY SAM@SAMEER//
//
using namespace std;
void display(); //FUNCTION DECLARATION//
void display(string,string);
void display(string,int ,int );
int main()

{
    display(); //FUNCTION CALL//
     display("sameer","tarigam");
     display("sameer",23,123);
    return 0;
}
void display() //FUNCTION DEFINITION//
{
    cout<<"HY MY NAME IS SAMEER"<<endl;
    }
    void display(string name,string address )
    {
        cout<<name<<endl<<address<<endl;
    }
void display(string name,int rollno,int marks)
{
    cout<<name<<endl<<rollno<<endl<<marks<<endl;
}
