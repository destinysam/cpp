#include <iostream>
//CODED BY SAM@SAMEER
//EMAIL:SAMS44802@GMAIL.COM
//DATE: 11/12/2019
//PROGRAM:HOW TO USE STATIC VARIEBLES
using namespace std;
void double();
void double()
{
    static int var;
     cout<<++var<<endl;
}
int main()
{
    for(int i=0;i<5;i++){
        double();
    }
    return 0;
}
