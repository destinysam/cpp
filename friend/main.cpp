#include <iostream>
//CODED BY SAM @SAMEER//
//USING OF FRIEND FUNCTION IN CLASS//
using namespace std;
class human
{
    string name;
    int age;
public:
    human(string iname,int iage)  //PARAMITERISED CONSTRUCTOR//
    {
        name=iname;
        age=iage;
    }
    friend void display(human);  //USING FRIEND TO  ACCESS TO PRIVATE MEMBERS OF CLASS//
};
void display(human s) //ACCESS PRIVATE MEMBERS BY USING FRIEND CLASS//
{
    cout<<s.name<<endl<<s.age<<endl;
}
int main()
{
    human aijaz("sameer",32);
    display(aijaz);
    return 0;
}
