#include<iostream>
//CODED BY SAM@SAMEER
//EMAIL:SAMS44802@GMAIL.COM
//DATE:11/12/2019
//PROGRAM:USING OF STATIC MEMBER CLASS IN CPP
using namespace std;
class employee
{
    private:
    string employee_name;
    string emp_id;//INSTANCE DATA MEMBER
    static int salary; //STATIC DATA MEMBER 
    public:
    void get_data();
    void put_data();
    static void show_data()
    {
        cout<<salary<<endl;
    }
}obj1,obj2,obj3; //OBJECT DECLERATION
int employee::salary=18000;//STATIC MEMBER DEFINITION AND INITIALIZATION
void employee::get_data()
{
    cout<<"TYPE THE EMPLOYEE NAME, EMPLOYEE ID AND EMPLOYEE SALARY:"<<endl;
    cin>>employee_name;
    cin>>emp_id;
}
void employee::put_data()
{
    cout<<"EMPLOYEE NAME :"<<employee_name<<"\n";
    cout<<"EMP_ID :"<<emp_id<<"\n";
    cout<<"EMPLOYEE_SALARY :"<<salary<<"\n";
}
int main()
{
    obj1.get_data();
    obj2.get_data();
    obj3.get_data();
    obj1.put_data();
    obj2.put_data();
    obj3.put_data();
    employee::show_data(); //FUNCTION CALL TO STATIC MEMBER FUNCTION WITHOUT USING OBJECT
    return 0;
}