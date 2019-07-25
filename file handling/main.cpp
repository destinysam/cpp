#include<iostream>
#include<fstream>
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:WRITING OF TEXT IN A FILE*/
using namespace std;
int main()
{
    ofstream fot;/*OBJECT*/
 fot.open("file1.docx");
 fot<<"hyy my name is sameer";
 fot.close();
return 0;
}