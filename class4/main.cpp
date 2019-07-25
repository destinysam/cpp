#include <iostream>
//CODED BY SAM @SAMEER//
//USING OF DEFAULT CONSTRUCTOR//
using namespace std;
class human
{
private:
    string name;
    int age;
    public:
    human() //DEFAULT CONSTRUCTOR//
    {
        cout<<"default constructor loaded"<<endl;
    }
    void gethuman(string n,int a )
    {
    age=a;
    name=n;
    }
    void display() //FUNCTION DEFINTION//
    {
        cout<<name<<endl<<age<<endl;
    }
};
int main()
{
    human sameer;
    sameer.gethuman("sameer",32);
    human yasir;
    yasir.gethuman("yasir",21);
    sameer.display(); //FUNCTION CALL//
   yasir.display(); //FUNCITON CALL//
    return 0;
}
