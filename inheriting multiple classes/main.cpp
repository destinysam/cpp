#include<iostream>
using namespace std;
class student
{
protected:
int rollno;
string name;
public:
void getname(int,string);
};
class empolyee
{
protected:
string name;
int emp_id;
int age;
public:
void setname(string,int ,int);
};
class empolyee_student:public student,public empolyee
{
public:
void display(void);
};
void student::getname(int irollno,string iname)
{
   rollno=irollno;
   name=iname;
}
void empolyee::setname(string iname,int iemp_id,int iage)
{
    name=iname;
    emp_id=iemp_id;
    age=iage;
}
void empolyee_student::display()
{
    cout<<"THE DETAILS OF STUDENT ARE \n:"<<"ROLLNO "<<rollno<<"\n"<<"NAME "<<name<<endl;
    cout<<"THE DETAILS OF EMPOLYEE ARE\n:"<<"NAME"<<name<<"EMP-ID "<<emp_id<<endl<<"AGE "<<age<<endl;
}
int main()
{
    empolyee_student obj;
    obj.getname(23,"sameer");
    obj.setname("yasir",43,22);
    obj.display();
    return 0;
}