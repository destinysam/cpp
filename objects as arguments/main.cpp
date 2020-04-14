#include<iostream>
using namespace std;
//CODED BY SAM@SAMEER
//EMAIL:SAMS44802@GMAIL.COM
//DATE:02/12/2019
//PROGRAM:TAKING INPUT AS A BIRTH YEAR OF A PERSON AND CURRENT YEAR AND THEN
//CALCULATING THE TOTAL HOURS,TOTAL MINUTES AND TOTAL SECONDS
class time
{
    protected:
    string name;
    int birth_year;
    int current_year;
    int total_years;
    int hours;
    int minutes;
    int seconds;
    public:
    void getdata(); // FUNCTION DECLERATION
    void showdata();
}obj1;
void time::getdata()
{
    cout<<"******HELLO WORLD******"<<endl;
    cout<<"TYPE YOUR NAME PLEASE"<<endl;
    cin>>name;
    cout<<"TYPE YOUR BIRTH YEAR :"<<endl;
    cin>>birth_year;
    cout<<"TYPE THE CURRENT YEAR :"<<endl;
    cin>>current_year;
    total_years = current_year-birth_year;
    hours = (total_years*360)*24;
    minutes = hours*60;
    seconds = minutes*60;
}
void time::showdata()
{
    cout<<"YOUR NAME :"<<name<<endl;
    cout<<"YOUR BIRTH YEAR :"<<birth_year<<endl;
    cout<<"YOUR ARE "<<total_years<<" YEARS OLD"<<endl;
    cout<<"TOTAL HOURS FROM YOUR BIRTH TO CURRENT IS :"<<hours<<endl;
    cout<<"TOTAL MINUTES FROM YOUR BIRTH TO CURRENT IS :"<<minutes<<endl;
    cout<<"TOTAL SECONDS FROM YOUR BIRTH TO CURRENT IS :"<<seconds<<endl;
}
int main()
{
    obj1.getdata();
    obj1.showdata();
    return 0;
}