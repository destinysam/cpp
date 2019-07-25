#include <iostream>
#include<string> //coded by sam//
using namespace std;
class student{
private :
    string name;
    string address;
    long int mobile_no;
public :
    student()
    {
        name="noname";
        address="noaddress";
        mobile_no=NULL;
    }
    void getstudent(string n,string a,long int m)
    {
        name=n;
        address=a;
        mobile_no=m;
    }
    void display(void)
    {
        cout<<"name "<<name<<"address "<<address<<"mobile_no" <<mobile_no;
    }
};
int main()
{
    student sameer;
    sameer.getstudent("sameer","tarigam",6005840594);
    sameer.display();
    return 0;
}
