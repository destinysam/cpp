<<<<<<< HEAD
#include <iostream>
//CODED BY SAM@SAMEER//
//EMAIL:SAMS44802@GMAIL.COM//
//SIMPLE PROGRAM BY MAKING OF OBJECTS//
using namespace std;
class student{
    private:
int regdno;
string name;
int marks;
public:
void getstudent(int r,string n,int m) //FUNCITON DEFINITION//
{
    regdno=r;
    name=n;
    marks=m;
}
void display(void)//FUNCITON DEFINITION//
{
    cout<<"registration no "<<regdno<<"name "<<name<<"marks "<<marks<<endl;
}
};
int main()
{
    student s1;
    s1.getstudent(234,"sameer",345);
    s1.display(); //FUNCTION CALL//
    return 0;
}
=======
#include <iostream>
#include <graphics>
using namespace std;
class student{
    private:
        string name;
        int rollno;
        int marks;
    public:
        student(string n,int r,int m){
            name=n;
            rollno=r;
            marks=m;
    }

        void display()
        {
            cout<<"MY  NAME IS DESTINYSAM\n"<<name<<endl;
            cout<<"MY ROLL NO\n"<<rollno<<endl;
            cout<<"my marks\n"<<marks<<endl;
        }
};
int main()
{
    string n;
     int r;
     int m;
    cin>>n>>r>>m;
    student sameer = student(n,r,m);
    sameer.display();
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    circle(250,200,50);
    getch();
    closegraph();
    return 0;
}
>>>>>>> 7d8b4f07c2e164cb80dbef88bf5a3ee5732b52e1
