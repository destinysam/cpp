#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    int arr[100];
    int arrr[100];
    cout<<"ENTER THE NUMBER OF ELEMENTS"<<endl;
    cin>>n;
    cout<<"ENTER THE ARRAY ELEMENTS"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=n-1,j=0;i>=0||j==n;i--,j++)
    {
        arrr[j]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        arr[i]=arrr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    return 0;
}
