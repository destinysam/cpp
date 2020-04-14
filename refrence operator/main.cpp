/*CODED BY SAM@SAMEER
  EMAIL:SAMS44802@GMAIL.COM
  DATED:07/09/2019
  PROGRAM: USING OF REFRENCE OPERATOR*/
# include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"ENTER THE VALUE OF A"<<endl;
    cin>>a;
    int &x = a;
    cout<<x;
    return 0;
}