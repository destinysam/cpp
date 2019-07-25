<<<<<<< HEAD
#include <iostream>
#include<cstdio>
using namespace std;
//CODED BY SAM@ SAMEER//
//EMAIL:SAMS44802@GMAIL.COM//
int main()
{
    char name[1000];
    cout << "ENTER YOUR NAME" << endl;
    //cin>>name;
    gets(name);/*USING GETS FUNCTION TO PRINT A STRING LINE*/
    cout<<name;
    return 0;
}
=======
#include <iostream>

using namespace std;

int main()
{
    char *name;
    cout << "ENTER YOUR NAME!" << endl;
    cin>>name;
    cout<<name;
    return 0;
}
>>>>>>> 7d8b4f07c2e164cb80dbef88bf5a3ee5732b52e1
