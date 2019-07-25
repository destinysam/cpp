#include <iostream>

using namespace std;
class person
{
private:
    char name[25];
    int age;
public:
   void getperson(); //FUNCTION DEFINITION//
   void display(); //FUNCTION DEFINTION//
};
void person::getperson() //USING SCOPE RESOLUTION TO ACCESS THE MEMBER FUNCTION
 CLASS//
{
    cout<<"ENTER THE NAME"<<endl;
    cin>>name;
    cout<<"ENTER THE AGE"<<endl;
    cin>>age;
}
void person::display()   //USING SCOPE RESOLUTION TO ACCESS THE MEMBER FUNCTION CLASS//
{
    cout<<name<<endl<<age<<endl;
}
int main()
{
    person human;
    human.getperson();
    human.display();
    return 0;
}
