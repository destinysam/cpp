#include <iostream>
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:MULTILEVEL INHERITENCE*/
using namespace std;
class student/*BASE CLASS*/
{
protected:
    int rollno;
    string name;
public:
    void get_number(string,int);
    void put_number();
};
void student::get_number(string iname,int irollno)/*ACCESSING MEMBER FUNCTION USING SCOPE RESOLUTION*/
{
    rollno=irollno;
    name=iname;
}
void student::put_number()/*ACCESSING MEMBER FUNCTION USING SCOPE RESOLUTION*/
{
    cout<<"STUDENTS NAME:  "<<name<<endl;
    cout<<"STUDENTS ROLLNO:  "<<rollno<<endl;

}
class test_subjects:public student/*DERIVING FROM DERIVED CLASS*/
{
protected:
    float subj1;
    float subj2;
public:
    void get_marks(float,float);
    void put_marks(void);
};
void test_subjects::get_marks(float x,float y)/*ACCESSING MEMBER FUNCTION USING SCOPE RESOLUTION*/
{
    subj1=x;
    subj2=y;
}
void test_subjects::put_marks()/*ACCESSING MEMBER FUNCTION USING SCOPE RESOLUTION*/
{
    cout<<"MARKS OF SUBJECT1: "<<subj1<<endl;
    cout<<"MARKS OF SUNJECT2: "<<subj2<<endl;
}
class result:public test_subjects/*DERIVING FROM DERIVED CLASS*/
{
protected:
    float total;
    public:
    void display();
};
void result::display()
{
    total=subj1+subj2;
    put_number();
    put_marks();
    cout<<"THE TOTAL MARKS OF STUDENT: "<<total<<endl;
}
int main()
{
    result student1;
    student1.get_number("sameer",234);
    student1.get_marks(85,79);
    student1.display();
    return 0;
}
