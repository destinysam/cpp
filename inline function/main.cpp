#include <iostream>
/*CODED BY SAM @SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM: USING OF INLINE FUNCTION IN CPP*/
using namespace std;
inline void display(); //FUNCTION DEFINITION//
 inline void display() //INLINE FUNCTION WILL AUTOLMATICALLY COPY THE CODE IN MAIN FUNCTION
{
     static int var=0; //USING STATIC VARIEBLE TO MAINTAIN THE CURRENT VALUE
     static int var1 = 0;
    cout<<"PRE INCREAMENT"<<++var<<endl; //PREINCREAMENT BY VAR
    cout<<"POST INCREAMENT"<<var1++<<endl;
}
int main()
{
    for(int i=0;i<5;i++)
    {
display();//FUNCTION CALL//
    }
    return 0;
}
