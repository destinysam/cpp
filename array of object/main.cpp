#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class employee
{
    protected:
    string employee_name[100];
    string employee_id[100];
    string dept_name[100];
    public:
    void getdata(int);
    void showdata(int);
};
void employee::getdata(int siz)
{
    for(int i=0;i<siz;i++)
    {
        cin>>employee_name[i];
        cin>>employee_id[i];
        cin>>dept_name[i];
    }
    
}
void employee::showdata(int siz)
{
    for(int i=0;i<siz;i++)
    {
        cout<<"EMPOLYEE NAME"<<employee_name[i]<<endl<<"EMPLOYEE ID"<<employee_id[i]<<endl;
        cout<<"EMPOLYEE DEPT NAME"<<dept_name[i]<<endl;
    }
}
const int size=3;
int main()
{
    employee array_object[size];
    cout<<"TYPE THE DETAILS OF EACH EMPLOYEE"<<endl;
    cout<<"TYPE THE NAME EMPLOYEE ID AND DEPT NAME OF THE EMPLOYEE "<<endl;
    for(int i=0;i<3;i++)
    {
        array_object[i].getdata(size);
    }
    cout<<"THE SELECTED EMPLOYEES ARE"<<endl;
    for(int j=0;j<size;j++)
    {
        array_object[j].showdata(size);
    }
}