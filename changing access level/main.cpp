#include <iostream>
/*CODED BY SAM@SAMEER;
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:CHANGING ACCESS LEVEL OF BASE CLASS MEMEBER*/
using namespace std;
class student/*BASE CLASS*/
{
protected :
    string name;
    int rollno;
    int marks;
    int regd;
public:
    void getdata()
    {
        cout<<"ENTER THE DETAILS OF THE STUDENT" <<endl;
        cin>>name>>rollno>>marks>>regd;
    }
};
    class student_details:private student/*DERIVED CLASS*/
    {
        public:
        student::getdata;/*ACCESSING THE MEMBER FUNCTION OF STUDENT CLASS*/
        void display()
        {
            cout<<"STUDENT NAME: "<<name<<endl<<"ROLLNO"<<rollno<<endl;
            cout<<"MARKS "<<marks<<endl<<"REGISTRATION NO "<<regd<<endl;
        }
    };
int main()
{
    student_details student1;
    student1.getdata();
    student1.display();
    return 0;
}
