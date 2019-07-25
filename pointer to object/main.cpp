#include <iostream>
//CODED BY SAM@SAMEER//
//USING POINTER OBJECT//
using namespace std;
class human{
public:
    string name;
    void display()
    {
        cout<<"HY MY NAME IS "<<name<<endl;
    }
};
int main()
{
    human *student=new human();            //by using pointer to an object i,e student//
    student->name="sameer";            //by using arrow operator we acessing the property name//
    student->display();
    return 0;
}
