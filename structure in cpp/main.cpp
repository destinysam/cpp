/* CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
DATED:30/09/2019
PROGRAM: HOW TO IMPLEMENT STRUCTURES IN CPP*/
# include<iostream>
using namespace std;
struct student{
    char student_name[100];
    int roll_no;
    int regd_no;
    long int mobile_no;
    void get_details();
    void display()
    {
         cout<<"STUDENT NAME "<<student_name<<"\t"<<"ROLLNO "<<roll_no<<"\t"<<"REGD NO "<<regd_no<<"\t"<<"MOBILE NO "<<mobile_no<<endl;
    }

}obj1;
void student::get_details()
{
    cout<<"TYPE THE STUDENT NAME "<<endl;
    cin.getline(student_name,100);
    cout<<"TYPE THE ROLLNO"<<endl;
    cin>>roll_no;
    cout<<"TYPE THE REGD NO"<<endl;
    cin>>regd_no;
    cout<<"TYPE THE MOBILE NO"<<endl;
    cin>>mobile_no;
}
int main()
{
    obj1.get_details();
    obj1.display();
    return 0;
}