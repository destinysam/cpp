#include <iostream>
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:TO INHERIT DERIVED CLASS FROM BASE CLASS*/
using namespace std;
class B /*BASE CLASS*/
{
public:
    string name;
    int rollno;
    string address;
    long int marks;
    void getdata(string iname,int irollno)/*FUNCTION DEFINTION*/
    {
        name=iname;
        rollno=irollno;
    }
    void setdata(string iaddress,long int imarks)/*FUNCTION DEFINTION*/
    {
        address=iaddress;
        marks=imarks;
    }
};
class D:public B
{
public:
    void display()/*FUNCTION DEFINTION*/
    {
        cout<<name<<endl<<rollno<<endl<<address<<endl<<marks<<endl;
    }
};
int main()
{
    D sameer;
    sameer.getdata("sameer",34);/*FUNCTION CALL*/
    sameer.setdata("tarigam",345);/*FUNCTION CALL*/
    sameer.display();/*FUNCTION CALL*/
    return 0;
}
