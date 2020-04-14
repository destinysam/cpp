#include<iostream>
using namespace std;
//CODED BY SAM@SAMEER
//EMAIL:SAMS44802@GMAIL.COM
//DATE:03/12/2019
//PROGRAM:USING OF FRIEND FUNCTION IN CLASSES
class employee  // DEFINING CLASS
{
    protected:
    string employee_name;
    string employee_id;
    string dept_name;
    public:
    void getdata();
    friend void showdata(employee); //DECLERATION OF FRIEND FUNCTION
};
void employee::getdata()
{
    cout<<"TYPE THE DETAILS OF EMPLOYEE :"<<endl;
    cout<<"TYPE THE NAME OF THE EMPOYEE :"<<endl;
    cin>>employee_name;
    cout<<"TYPE THE EMPLOYEE ID :"<<endl;
    cin>>employee_id;
    cout<<"TYPE THE DEPT NAME OF EMPLOYEE :"<<endl;
    cin>>dept_name;
}
void showdata(employee obj1) //FRIEND FUNCTION CAN BE EASILY ACCESSED FROM THE OUTSIDE CLASS
{
  cout<<"EMPLOYEE NAME "<<obj1.employee_name<<endl;
  cout<<"EMPLOYEE_ID "<<obj1.employee_id<<endl;
  cout<<"DEPARTMENT NAME"<<obj1.dept_name<<endl;
}
int main()
{
    employee obj2;  
    obj2.getdata();
    showdata(obj2); // PASSING OBJECT AS ARGUMENT
    return 0;
}