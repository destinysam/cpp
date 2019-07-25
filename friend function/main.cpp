#include <iostream>
//CODED BY SAM @SAMEER//
//PROGRAM USING FRIEND FUNCTION TO SHARE THE MEMBER FUNCTIONS OF ONE CLASS WITH ANOTHER CLASS//
using namespace std;
class human
{
    string name;
    int age;
public:
    human(string iname,int iage) //DEFAULT CONSTRUCTOR//
    {
        name=iname;
        age=iage;
    }
    friend void display(human sam);//USING FRIEND FUNCTION TO GIVE ACCESS DISPLAY FUNCTION//
};
void display(human sam) //FUNCTION DEFINTION//
{
    cout<<sam.name<<endl<<sam.age<<endl;
}
int main()
{
    human sameer("yasir",32);
    display(sameer); //FUNCTION CALL//
    return 0;
}
