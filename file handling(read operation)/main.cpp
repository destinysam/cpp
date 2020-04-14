#include<iostream>
#include<fstream>
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:READING DATA FROM FILE*/
using namespace std;
int main()
{
    ifstream fin;/*OBJECT*/
    char ch;
    fin.open("file1.docx");
 // fin>>ch;   using when we dont want to create spaces bw words
    ch=fin.get();/*taking char by char and maks separation bw words*/
    while(!fin.eof())
    {
        cout<<ch;
        ch=fin.get();
    }
    fin.close();
    return 0;
}