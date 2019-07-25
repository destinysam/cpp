#include <iostream>
//CODED BY SAM @SAMEER//
//PRINTING THE SAME SIZE OF
using namespace std;

int main()
{
    int n;
    int m;
    string x[1000];
    int a;
    cout<<"enter the numbers"<<endl;
    cin>>n;
    cin>>m;
    cout<<"enter the strings"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>x[i];
      a=x[i].size();
     /* if(a==m)
      {
          cout<<"excuted"<<endl;
      }
      else
        cout<<"SORRY THE SIZE OF STRING NOT MATCHED\n"<<endl;
    }*/

}
    for(int i=1;i<=n;i++)
    {

                cout<<x[i]<<endl;
    }
    return 0;
}
