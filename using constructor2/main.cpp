#include <iostream>
#include<string>
using namespace std;
class human {
private:
    string name;
    int rollno;
    int marks;
public :
    human()
    {
        cout<<"constructor is created"<<endl;
        name="noname";
        rollno=NULL;
        marks=NULL;
    }
    void display()
    {
        cout<<name<<endl<<rollno<<endl<<marks<<endl;
    }

};
int main()
{
    human person;
    person.name="sameer";
    person.rollno=323;
    person.marks=341;
    person.display()
    return 0;
}
