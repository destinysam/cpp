#include<iostream>
using namespace std;
int main()
{
    int element;
    int *arr;
    cout<<"TYPE ANY ELEMENT :"<<endl;
    cin>>element;
    cout<<"CREATING ARRAY SIZE "<<endl;
    arr = new int[element]; // element is a object
    cout<<"DYNAMIC MEMORY ALLOCATED SUCCESSFULLY "<<endl;
    delete arr; // USING DELETE OPERATOR TO FREE MEMORY
    return 0;
    }