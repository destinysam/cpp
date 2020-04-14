#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    ifstream fin;
    string array[5];
    cout<<"TYPE THE FIVE STUDENT NAMES :"<<endl;
     for(int i=0;i<5;i++)
    {
        cin>>array[i];
    }
    fout.open("data.dat",ios::app|ios::binary);
    for(int i=0;i<5;i++)
    {
        fout<<array[i];
    }
    fout.close();
    char character;
    fin.open("data.dat",ios::in);
    character=fin.get();
    while(!fin.eof())
    {
        cout<<character;
        character=fin.get();
    }
    fin.close(); 
}