#include<iostream>
#include<string>
/*CODED BY SAM@SAMEEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:INHERITING OF MULTIPLE CLASSES*/
using namespace std;
class student/*BASE CLASS*/
{
    protected:
    string name;
    int regd;
    public:
   void taking_details();/*FUNCTION DECLERATION*/
   void student_details(void);
};
void student::taking_details()/*ACCESSING MEMBER FUNCTION USING SCOPE RESOLUTION*/
{
cout<<"ENTER THE NAME AND regd"<<endl;
cin>>name>>regd;
}
void student::student_details()/*ACCESSING MEMBER FUNCTION USING SCOPE RESOLUTION*/
{
    cout<<"NAME :"<<name<<endl<<"regd :"<<regd<<endl;
}
class department:public student/*DERIVED CLASS*/
{
    protected:
   string dept_name;
   int rollno;
   public:
   void getdata();
   void dept_details(void);
};
void department::getdata()
{
    cout<<"ENTER THE DEPT NAME AND BATCH ROLLNO"<<endl;
    cin>>dept_name>>rollno;
}
void department::dept_details()
{
    cout<<"DEPARTMENT-NAME :"<<dept_name<<endl<<"ROLLNO :"<<rollno<<endl;
}
class batch:public department
{
    protected:
    int batch_no;
    int semester;
    public:
    void setdata();
    void set_batch_datails();
    void display();
};
void batch::setdata()/*ACCESSING MEMBER FUNCTION USING SCOPE RESOLUTION*/
{
    cout<<"ENTER THE BATCH NO AND CURRENT SEMESTER"<<endl;
    cin>>batch_no>>semester;
}
void batch::set_batch_datails()/*ACCESSING MEMBER FUNCTION USING SCOPE RESOLUTION*/
{
    cout<<"BATCH NO  :"<<batch_no<<endl<<"SEMESTER :"<<semester<<endl;
}
void batch::display()/*ACCESSING MEMBER FUNCTION USING SCOPE RESOLUTION*/
{
    cout<<"THE DETAILS OF THE STUDENT IS HERE"<<endl;
 student_details();/*FUNCTION CALL*/
 dept_details();
set_batch_datails();
}
int main()
{
    batch s1;
    s1.taking_details();
    s1.getdata();
    s1.setdata();
    s1.display();
    return 0;
}