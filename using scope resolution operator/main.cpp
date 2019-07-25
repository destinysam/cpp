#include <iostream>
#include<String>
using namespace std;
class student
{
private :
    string name;
    int roll_no;
    int marks;
public:
    string name;
    int roll_no;
    int marks;
void display();
};
void student :: display()
{
    cout<<" name "<<student ::name<<" rollno "<<student ::roll_no<<" marks "<<student ::marks<<endl;
}
int main()
{
    student anil;
    student yasir;
    anil.name="sameer";
    anil.roll_no=341;
    anil.marks=412;
    anil.display();
    yasir.name="yasir";
    yasir.roll_no=342;
    yasir.marks=123;
    yasir.display();

    return 0;
}
