#include <iostream>
//CODED BY SAM @SAMEER
//EMAIL:SAMS44802@GMAIL.COM
//DATE 12/12/2019
using namespace std;
class human
{
    public:
    static int var; //DECLAREING STATIC VARIEBLE//
    human() //DEFAULT CONSTRUCTOR//
    {
        var++;
    }
    void display()
    {
        cout<<"HYY  THE FUNCTION IS CALLED"<<var<<endl;
    }
};
int  human::var=0;//STATIC DEFINITION
int main()
{
    /*cout<<human::var<<endl; //PRINTING THE VALUE OF VAR THAT HOW MANY TIMES IT IS CALLED//
    human sameer; //CREATING OBJECT//
    sameer.display();
    cout<<human::var<<endl;
    human yasir;
    yasir.display();*/
    //WHEN OBJECT IS CREATED FUNCTION CALLS TO DEFAULT CONSTRUCTOR AND THEN DISPLAY//
     human mamoon;
    human warfan;
    human aijaz;
    human shujaat;
    warfan.display();
    return 0;
}
