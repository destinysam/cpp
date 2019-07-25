#include <iostream>
/*CODED BY SAM @SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM: BY USING INLINE FUNCTION*/
using namespace std;
void display(); //FUNCTION DEFINITION//
 inline void display() //INLINE FUNCTION WILL AUTOLMATICALLY COPY THE CODE IN MAIN FUNCTION//
{
    static int var=0; //USING STATIC VARIEBLE TO MAINTAIN THE CURRENT VALUE//
    cout<<"function called"<<++var<<endl; //PREINCREAMENT BY VAR//
}
int main()
{
    for(int i=0;i<5;i++)
    {
display();//FUNCTION CALL//
    }
    return 0;
}
