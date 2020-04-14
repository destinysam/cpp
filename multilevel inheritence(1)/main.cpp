#include<iostream>
using namespace std;
class student
{
    protected:
    string student_name;
    string class_name;
    int student_rollno;
    public:
    void get_student_details();
};
void student::get_student_details()
{
    cout<<"TYPE THE STUDENT DETAILS :"<<endl;
    cout<<"TYPE THE STUDENT_NAME :"<<endl;
    cin>>student_name;
    cout<<"TYPE THE CLASS NAME :"<<endl;
    cin>>class_name;
    cout<<"TYPE THE STUDENT ROLLNO :"<<endl;
    cin>>student_rollno;
}
class test:public student
{
    protected:
    int  sub1;
    int  sub2;
    int  sub3;
    public:
    void get_student_testdetails();
};
void test::get_student_testdetails()
{
    cout<<"TYPE THE SUBJECT DETAILS"<<endl;
    cout<<"TYPE THE MARKS OF FIRST DATA COMMUNICATION :"<<endl;
    cin>>sub1;
    cout<<"TYPE THE MARKS OF DIGITAL ELECTRONICS :"<<endl;
    cin>>sub2;
    cout<<"TYPE THE MARKS OF C++ :"<<endl;
    cin>>sub3;
}
class result:public test
{
    protected:
    int total_marks=0;
    float percentage;
    public:
    void get_result();
    void display_alldata();
};
void result::get_result()
{
    get_student_details();
    get_student_testdetails();
    display_alldata();
}   
void result::display_alldata()
{
    cout<<"THE STUDENT DETAILS ARE :"<<endl;
    cout<<"STUDENT NAME :"<<student_name<<"\n"<<"STUDENT ROLL :"<<student_rollno<<"\n";
    cout<<"STUDENT CLASS NAME :"<<class_name<<"\n";
    total_marks=sub1+sub2+sub3;
    percentage=float((total_marks/500)*100);
     cout<<"TOTAL MARKS OBTAINED "<<total_marks<<"\n";
    cout<<"PERCENTAGE :"<<percentage<<endl;
    if(percentage>80)
    {
        cout<<"STUDENT HAS A+ GRADE"<<endl;
    }
    else if(percentage>70 and percentage<80)
    {
        cout<<"STUDENT HAS A GRADE :"<<endl;
    }
    else
    {
        cout<<"STUDENT HAS A B GRADE :"<<endl;
    }
} 
int main()
{
    result obj1;
    obj1.get_result();
    return 0;
}
