#include <iostream>
//CODED BY SAM @SAMEER//
//BY USING CONSTRUCTORS WITH SAME NAME AND DIFFRENT PARAMETERS TO MAKE CONSTRUCTOR OVERLOADING//
using namespace std;
class human
{
private: //ACCESS TO INSIDE CLASS//
    string name;
    int age;
    int rollno;
public://ACCESS TO OUTSIDE CLASS//
    human()
    {
        cout<<"default constructor\n";
        name="noname";
        age=0;
    }
    human(string iname,int irollno)
    {
        name=iname;
        age=34;
        rollno=irollno;
    }
    human(int iage,string iname,int irollno)
    {
        name=iname;
        rollno=irollno;
        age=iage;
    }
    void display() //FUNCTION DEFINITION//
    {
        cout<<name<<endl<<age<<endl<<rollno<<endl;
    }
};
int main()
{

    human faisal; //AUTOMATICALLY CALL TO DEFAULT CONSTRUCTOR//
    human yasir("sameer",123); //passing arguments to constructor//
    yasir.display(); //CALLING FUNCTION//
    human sameer(231,"sameer",34); //passing arguments to constructor//
    sameer.display();//CALLING FUNCTION//
    return 0;
}
