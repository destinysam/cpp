#include <iostream>
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:USING  OF PROTECTED ACCESS SPECIFIER IN SINGLE INHERITENCE*/
using namespace std;
class person /*BASE CLASS*/
{
protected:
    string name;
    int rollno;
    int regdno;
    int marks;
public:
    void setdata(string iname,int irollno)/*FUNCTION DEFINITION*/
    {
        name=iname;
        rollno=irollno;
    }
    void setdata(int iregdno,int imarks)/*FUNCTION DEFINITION WITH SAME NAME BUT DIFFRENT ARUGMENTS*/
    {
        regdno=iregdno;
        marks=imarks;
    }
};
class student:public person /*INHERITING STUDENT FROM PERSON CLASS*/
{
    public:
void display()/*FUNCTION DEFINITION*/
{
    cout<<"THE DETAILS ARE\n"<<name<<endl<<rollno<<regdno<<endl<<marks;
}
} ;
int main()
{
    student bachlor;
    bachlor.setdata("sameer",23);/*FUNCTION CALL*/
    bachlor.setdata(321,445);/*FUNCTION CALL*/
    bachlor.display(); /*FUNCTION CALL*/
    return 0;
}
