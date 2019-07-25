#include <iostream>
/*CODED BY SAM@SAMEEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:SINGLE INHERITENCE USING PRIVATE ACCESS SPECIFIER*/
using namespace std;
class person/*BASE CLASS*/
{
protected:
    string name;
    int rollno;
    int marks;
public:
    void setdata(string iname,int irollno,int imarks)
    {
        name=iname;
        rollno=irollno;
        marks=imarks;
    }
};
class student:private person/*DERIVED CLASS*/
{
public:
    void getdata(string iname,int irollno,int imarks)
    {
        setdata(iname,irollno,imarks);/*CALL TO MEMBER FUNCTION OF BASE
        CLASS*/
    }
    void display()
    {
        cout<<"NAME: "<<name<<"\n"<<"ROLLNO: "<<rollno<<"\n"<<"MARKS: "<<marks<<endl;
    }
};
class gdt_student:public student/*DERIVED  FROM DERIVED CLASS*/
{
public:
    void getting_data(string iname,int irollno,int imarks)
    {
        getdata(iname,irollno,imarks);/*CALL TO MEMBER FUNCTION OF
        DERIVED CLASS*/
    }
};
int main()
{
    gdt_student sameer;
    sameer.getting_data("sameer",32,453);
    sameer.display();
    return 0;
}
