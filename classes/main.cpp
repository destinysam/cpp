// CODED BY SAM@SAMEER
// EMAIL: SAMS44802@GMAIL.COM
// DATE: 12/11/2019
// PROGRAM: REPRESENTING THE CLASS
#include<iostream>
using namespace std;
class student  // DEFINING THE CLASS
{
    private:
    string name;
    int rollno;
    string address;
    public:
    void get_details();
    void put_details();
};
void student::get_details()
{
    cout<<"TYPE THE NAME OF STUDENT "<<endl;
    cin>>name;
    cout<<"TYPE THE ROLLNO OF STUDENT "<<endl;
    cin>>rollno;
    cout<<"TYPE THE ADDRESS OF STUDENT "<<endl;
    cin>>address;
}
void student::put_details()
{
    cout<<"THE DETAILS OF THE STUDENT ARE "<<endl;
    cout<<"NAME: "<<name;
    cout<<endl;
    cout<<"ROLLNO:"<<rollno;
    cout<<endl;
    cout<<"ADDRESS: "<<address;
}
int main()
{
    student obj1; // DEFINING THE OBJECT
    obj1.get_details();
    obj1.put_details();
    return 0;
}