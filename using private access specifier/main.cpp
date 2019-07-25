#include <iostream>

using namespace std;
class human
{
private:
    string name;
    string address;
    long int mobile_no;
public:
    void display(void)
    {
        cout<<name<<endl<<address<<endl<<mobile_no<<endl;
    }
    void setdetail(string n,string a,long int m)
    {
        name=n;
        address=a;
        mobile_no=m;
    }
};
int main()
{
    human yasir;
    cin>>yasir.name>>endl;
    cin>>yasir.address>>endl;
    cin>>yasir.mobile_no>>endl;
    yasir.setdetail(name,address,mobile_no)
    yasir.display();
    return 0;
}
