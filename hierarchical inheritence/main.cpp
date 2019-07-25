#include<iostream>
using namespace std;
class student
{
    protected:
    string name;
    int rollno;
    int regd_no;
    public:
    void getdata()
    {
        cout<<"ENTER THE DETAILS OF STUDENT\n";
        cin>>name>>rollno>>regd_no;
    }
};
class arts:public student;
{
    protected:
    string subj1;
    string subj2;
    string subj3;
    public:
    void arts_subj()
    {
        cout<<"ENTER THE SUBJECTS OF THE ARTS STUDENT\n";
        cin>>sub1>>sub2>>sub3;
    }
};
class engineering:public student
{
    protected:
    string sub1;
    string sub2;
    string sub3;
    public:
    void compulsory_subj()
    {
        cout<<"ENTER THE SUBJECTS OF ENGINEERING STUDENT\n";
        cin>>sub1>>sub2>>sub3;
    }
};
void medical:public student
{
    protected:
    string sub1;
    string sub2;
    string sub3;
    public:
    void medical_subj()
    {
        cout<<"ENTER THE SUBJECTS OF MEDICAL STUDENT\n";
        cin>>sub1>>sub2>>sub3;
    }
};
class mechanical:public engineering
{
    protected:
    string sub1;
    string sub2;
    public:
    void mech_subj()
    {
    cout<<"ENTER THE SUBJECTS OF MECHANICAL STUDENT\n";
        cin>>sub1>>sub2;
    }
};
class electrical:public engineering
{
protected:
string sub1;
    string sub2;
    public:
    void elec_subj()
    {
    cout<<"ENTER THE SUBJECTS OF ELECTRICAL STUDENT\n";
        cin>>sub1>>sub2;
};
class civil:public engineering
{
    protected:
string sub1;
    string sub2;
    public:
    void civil_subj()
    {
    cout<<"ENTER THE SUBJECTS OF ELECTRICAL STUDENT\n";
        cin>>sub1>>sub2;
}
};
void full_details::show_data()
{
    cout<<"THE DETAILS OF STUDENT ARE\n";
    cout<<"NAME "<<name<<"\n"<<"ROLLNO "<<rollno<<"\n"<<"REGD NO "<<regd_no<<"\n";
    cout<<"ARTS SUBJECTS\n";
    cout<<sub1<<"\n"<<sub2<<"\n"<<sub3<<"\n";
    cout<<"ENGINEERING SUBJECTS COMPULSORY TO ALL ENGINEERING COURSES\n";
    cout<<sub1<<"\n"<<sub2<<"\n"<<sub3<<"\n";
    cout<<"MEDICAL SUBJECTS\n";
    cout<<sub1<<"\n"<<sub2<<"\n"<<sub3<<"\n";
    cout<<"MECHANICAL ENGINEERING SUBJECTS\n";
    cout<<sub1<<"\n"<<sub2<<"\n";
    cout<<"ELECTRICAL ENGINEERING SUBJECTS\n";
    cout<<sub1<<"\n"<<sub2<<"\n";
    cout<<"CIVIL ENGINEERING SUBJECTS\n";
    cout<<sub1<<"\n"<<sub2<<"\n";
}
int main()