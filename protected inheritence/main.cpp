#include <iostream>
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:SINGLE INHERITENCE BY USING PROTECTED ACCESS SPECIFIER*/
using namespace std;
class person/*BASE CLASS*/
{
    protected:
        string name;
        int age;
        int standard;
        int marks;
    public:
        void getdata(string iname,int iage,int istandard,int imarks)
        {
            name=iname;
            age=iage;
            standard=istandard;
            marks=imarks;
        }
};
        class student: protected person/*DERIVED CLASS*/
        {
    public:
        void newdata(string iname,int iage,int istandard,int imarks)
        {
            getdata(iname,iage,istandard,imarks);/*CALL TO MEMBER FUNCTION OF BASE CLASS
            BECOZE IT IS IN INACESSIBLE DUE TO PROTECTED*/
        }
                void setdata()
        {
            cin>>name;
            cin>>age;
            cin>>standard;
            cin>>marks;
        }
        void display()
        {
            cout<<"NAME: "<<name<<"\n"<<"AGE: "<<age<<"\n"<<"STANDARD: "<<standard<<"\n"<<"MARKS: "<<marks<<"\n";
        }
        };
int main()
{
    student sameer,yasir;
    sameer.setdata();
    yasir.newdata("sameeer",21,14,435);
    sameer.display();
    yasir.display();
    return 0;
}
