#include <iostream>
using namespace std;
/*CODED BY SAM @ SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:PRINT THE SUM OF DIAGONAL ELEMENTS OF A MULTI-DIAMENSIONAL ARRAY*/
int main()
{
    int arr[10][10];
    int i,j,n;
    int sum=0;
    cout<<"ENTER THE NO OF ELEMENTS\n"<<endl;
    cin>>n;
    cout<<"ENTER THE MATRIX"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j]; /*TAKING MATRIX FROM USER*/
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                 sum+=arr[i][j]; /*STORING THE SUM  OF DIAGONAL ELEMENTS IN VARIEBLE SUM*/
            }
        }
    }
    cout<<sum<<endl;
return 0;
}
