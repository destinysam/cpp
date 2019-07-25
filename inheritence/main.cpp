#include <iostream>
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
SIMPLE PROGRAM TO INHERIT ONE CLASS FROM BASE CLASS
BASED ON PUBLIC INHERITENCE*/
using namespace std;
class person  //BASE CLASS//
{
public:
    string name;
    int age;
    int rollno;
    void setdata(string iname,int iage,int irollno) //FUNCTION DEFINTION//
    {
        name=iname;
        age=iage;
        rollno=irollno;
    }
};
class student: public person //STUDENT CLASS IS DERIVED FROM PERSON CLASS AND ACCESS THE MEMBER FUNCTION OF PERSON //
{
public:
    string address;
    string gcw;
    void getdata(string iaddress,string igcw) //FUNCTION DEFINTION//
    {
        address=iaddress;
        gcw=igcw;
    }
    void display() //FUNCTION DEFINTION//
    {
        cout<<"my name is "<<name<<"my other details are"<<age<<endl<<rollno<<endl<<address<<endl<<gcw;
    }
};
int main()
{
    student  sameer;
    sameer.setdata("sameer",23,123);
    sameer.getdata("tarigam","govt womens college");
    sameer.display(); //FUNCTION CALL//
    return 0;
}
