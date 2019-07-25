#include <iostream>

using namespace std;

class humanbeing{
public:
    string name;
    int roll_no;
    int marks;
    void display()
    {
        cout<<"HYY MY DETAILS ARE"<<name<<endl<<roll_no<<endl<<marks<<endl;
    }
};
int main()
{
    humanbeing student;
    cin>>student.name;
    cin>>student.roll_no;
    cin>>student.marks;
    student.display();
    return 0;
}
