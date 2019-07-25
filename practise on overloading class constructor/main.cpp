#include <iostream>
//CODED BY SAM@ SAMEER//
using namespace std;
class human
{
private:
    string name;
    string address;
    int age;
public :
    human()
    {
        cout<<"default constructor displayed"<<endl;
        name="mamoon";
        address="pattan";
        age=20;
    }
    human(string n,string ad)
    {
        name=n;
        address=ad;
        age=20;
    }
    human(int a,string n){
    name=n;
    address="pattan";
    age=a;
    }
    human(string ad,int a){
    name="sameer";
    address=ad;
    age=a;
    }
    void display()
    {
        cout<<name<<endl<<address<<endl<<age<<endl;
    }
};
int main()
{
    human student;
    student.display();
    human empolyee("mamoon","pattan");
    empolyee.display();
    human empolyee1(19,"yasir");
    empolyee1.display();
    human empolyee2("kanigam",19);
    empolyee2.display();
    return 0;
}
