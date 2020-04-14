// CODED BY SAM@SAMEER
// EMAIL:SAMS44802@GMAIL.COM
// DATE:12/11/2019
// PROGRAM: USING OF REFREENCE OPERATOR AND ITS WORK
#include<iostream>
using namespace std;
int main()
{
    string firstname;
    string lastname;
    string fullname;
    cout<<"TYPE FIRSTNAME AND SECOND NAME :"<<endl;
    cin>>firstname>>lastname;
    fullname = firstname + lastname;
    string &correct_name = fullname; // REFRENCE OPERATOR CORRECT_NAME
    // DECLERATION AND INITIALIZATION OF REFREENCE OPERATOR SHOULD BE DONE AT THE SAME TIME 
    cout<<correct_name<<endl;
    cout<<fullname;
    cout<<endl;
    fullname = "noname";
    cout<<fullname<<endl;
    cout<<correct_name;
    cout<<endl;
    correct_name = "user_defined";
    cout<<correct_name<<endl;
    cout<<fullname;

}
