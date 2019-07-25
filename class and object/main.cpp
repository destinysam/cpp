#include <iostream>
//CODED BY SAM@SAMEER//
//EMAIL:SAMS44802@GMAIL.COM
//CREATING OF MULTIPLE OBJECTS//
using namespace std;
class student
{
public:
    string name;
    int rollno;
    int marks;
    void display() //FUNCITON DEFINTITION//
    {
        cout<<"HYY MY DETAILS ARE\n"<<name<<endl;
        cout<<"MY ROLL NO IS \n"<<rollno<<endl;
        cout<<"MY MARKS ARE\n"<<marks<<endl;
    }
};
int main()
{
         student sameer; //CREATING OBJECT//
         sameer.name="sameer";
         sameer.rollno=1860007;
         sameer.marks=448;
         sameer.display(); //CALL TO DISPLAY FUNCTION//
         student yasir;
         yasir.name="yasir";
         yasir.rollno=1234;
         yasir.marks=333;
         yasir.display(); //CALL TO DISPLAY FUNCTION//

    return 0;
}
