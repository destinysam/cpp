#include<iostream>
using namespace std;
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:CALLING AND PASSING ARGUMENT FROM DERIVED CLASS TO BASE CLASS*/
class person/*BASE CLASS*/
{
protected:
string name;
int rollno;
public:
person(string iname,int irollno)/*CONSTRUCTOR */
{
    name=iname;
    rollno=irollno;
    cout<<"THE CONSTRUCTOR OF PERSON CALLED"<<endl;
}
};
class student:person
{
    public:
    student(string name,int rollno):person(name,rollno)/*PASSING ARGUMENT TO BASE CLASS CONSTRUCTOR*/
    {
        cout<<"CONSTRUCTOR OF STUDENT CLASS CALLED"<<endl;
    }
    void display()
    {
        cout<<"THE DETAILS OF STUDENT ARE\n";
        cout<<name<<rollno;
    }
};
int main()
{
student sameer("sameer",32);
sameer.display();
return 0;
}