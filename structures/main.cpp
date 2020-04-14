#include<iostream>
using namespace std;
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:IMPLEMENTATION OF STRUCTURE*/
struct empolyee /*structure*/
{
    string name;
    string emp_id;
    string address;
    string dept_name;
    
    void get_data()
    {
        cout<<"ENTER THE NAME\n";
        cin>>name;
        cout<<"ENTER THE EMPOLYEE ID\n";
        cin>>emp_id;
        cout<<"ENTER THE ADDRESS\n";
        cin>>address;
        cout<<"ENTER THE DEPARTMENT NAME\n";
        cin>>dept_name;
           }
           void print_data()
{
cout<<"NAME "<<name<<endl<<"EMD_ID "<<emp_id<<endl<<"ADDRESS "<<address<<endl<<"DEPT_NAME "<<dept_name;
}
           
};
int main()
{
    empolyee obj1;/*OBJECT CREATED*/
    obj1.get_data();
    obj1.print_data();
    return 0;
}