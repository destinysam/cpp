#include<iostream>
#include<fstream>
/*CODED BY SAM@SAMEER
EMAIL:SAMS44902@GMAIL.COM
PROGRAM:TO APPEND THE SINGLE FILE*/
using namespace std;
int main()
{
    fstream fin;/*OBJECT*/
    fin.open("file1.docx",ios::in|ios::out|ios::app);
    fin<<"hyy i m sameer"<<endl;
    fin<<"i m from kashmir";
fin.close();
return 0;
}