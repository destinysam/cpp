// CODED BY SAM@SAMEEER
// EMAIL:SAMS44802@GMAIL.COM
// DATE: 12/11/2019
// PROGRAM: POINTERS IN CPP
#include<iostream>
using namespace std;
int main()
{
    int *pointer;
    int x;
    pointer = &x;
    *pointer = 10;
    cout<<x; 
    cout<<endl;
    cout<<*pointer;


}