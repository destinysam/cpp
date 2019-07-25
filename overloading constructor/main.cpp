#include <iostream>
//CODED BY SAM@ SAMEER//
//USING MULTIPLE CONSTRUCTORS TO MADE CONSTRUCTOR OVERLOADING USING DIFFERENT PARAMTERS//
using namespace std;
class student
{
private:
    string name;
    int rollno;
    int marks;
    int age;
public:
    student()
    {
        cout<<"default constructor"<<endl;
        name="noname";
        rollno=NULL;
        marks=NULL;
    }
    student(string n,int r)
    {
        name=n;
        rollno=r;
        marks=0;
        age=34;
        cout<<"2 constructor displayed"<<endl;
    }
        student(int r,int m)
        {

            rollno=r;
            marks=m;
            name="sameer";
            age=15;
            cout<<" constructor works"<<endl;
        }
        student(string n,int m,int a)
        {
            name=n;
            marks=m;
            age=a;
            rollno=45;
            cout<<"3 constructor works"<<endl;
        }
        void display()
        {
            cout<<name<<endl<<marks<<endl<<rollno<<endl<<age<<endl;
        }

    };
int main()
{
  student bachlor;
  bachlor.display();
  student master("sameer",234);
  master.display();
  student scholar(345,552);
  scholar.display();
  student scientific("yasir",345,18);
  scientific.display();
    return 0;
}
