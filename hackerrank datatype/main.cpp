#include <iostream>
#include <iomanip>
#include <limits>
#include <string.h>
#include <cstdio>
using namespace std;
/*CODED BY SAM @SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM: TO ADD TWO INTEGERS,ADDIITION OF DOUBLE,CONCATINATE OF TWO STRINGS*/
int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int c;
    char  z[100]; /*CHARACTER ARRAT*/
    cout<<"enter the integer and string"<<endl;
    cin>>c;
    gets(z); /*TAKING INPUT CHARACTER FORM USER*/
        int a=c+i;
        double b=d+d;
        cout<<a<<endl;
        cout<<fixed;
        cout<<setprecision(1); /*SYNTEX FOR PRINTING OF DECIMAL VALUES,ALSO WE HAVE DECLARE HOW MANY DECIMALS WE WANT TO PRINT(1)*/
        cout<<b<<endl;
        cout<<s<<""<<z;
        return 0;
}
