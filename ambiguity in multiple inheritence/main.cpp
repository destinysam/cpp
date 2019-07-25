#include<iostream>
using namespace std;
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:AMBIGUITY RESOLUTION IN MULTIPLE INHERITENCE*/
class person/*BASE CLASS*/
{
    public:
    void display()
    {
        cout<<"HYY MY NAME IS \n";
    }
};
class student/*BASE CLASS*/
{
    public:
    void display()
    {
        cout<<"SAMEER\n";
    }
};
class student_detail:public person,public student/*DERIVED CLASS*/
{
public:
void display()/*OVERRIDES DISPLAY() OF PERSON AND STUDENT*/
{
    person::display();/*AMBGUITY RESOLUTION*/
    student::display();/*AMBGUITY RESOLUTION*/
}
};
int main()
{
    student_detail obj;
    obj.display();
}