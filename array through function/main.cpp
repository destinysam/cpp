#include<iostream>
#include<string.h>
using namespace std;
//CODED BY SAM@SAMEER
//EMAIL:SAMS44802@GMAIL.COM
//DATE:03/12/2019
//PROGRAM:PASSING OF ARRAY TO  FUNCTION
void fun1(string [],int []); //FUNCTION DECLEARTION
int main()
{
     string student_name[5]; //DECLARING ARRAY
     int student_rollno[5];
     cout<<"TYPE THE NAME AND ROLLNO OF STUDENT"<<endl;
     for(int i=0;i<5;i++)
     {
        cin>>student_name[i];
        cin>>student_rollno[i];

     }
     fun1(student_name,student_rollno);
    return 0;
}
void fun1(string student_name[],int student_rollno[])
{
    for(int i=0;i<5;i++)
    {
        cout<<"STUDENT NAME :"<<student_name[i]<<endl<<"STUDENT ROLLNO :"<<student_rollno[i]<<endl;
    }
}
