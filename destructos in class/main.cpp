#include <iostream>
//CODED BY SAM @SAMEER//
//USING DESTRUCTOR TO RELEASE MEMORY//
using namespace std;
class student
{
public:
    student()
    {
        cout<<"CONSTRUCTOR CREATED\n"<<endl;
    }
    ~student() //destructor THAT IS PRECEDED BY ~ 
    {
        cout<<"DESTRUCTOR OBJECT DELETED\n"<<endl;
    }
};
int main()
{
    student *sameer;  //pointer object//
    sameer=new student();
    delete sameer; //using delete keyword to delete constructor//
    return 0;
}
