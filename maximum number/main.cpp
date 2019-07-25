#include <iostream>
#include<stdlib.h>
using namespace std;
void max(int,int ,int ,int );
int display(int w,int x,int y,int z)
{
    if(w>x&&w>y&&w>z)
        return(x);
    else if(x>w&&x>y&&x>z)
        return(x);
    else if(y>w&&y>x&&y>z)
        return(y);
    else
        return(z);
}
int main()
{
    int a,b,c,d;
    int max;
    cout<<"ENTER THE NOS"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    max=display(a,b,c,d);
    cout<<max<<endl;
    return 0;
}

