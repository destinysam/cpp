#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream fout;
char arr[100];
int age;
fout.open("file4.txt");
cout<<"ENTER THE NAME"<<endl;
cin.getline(arr,100);
fout<<arr;
cout<<"ENTER THE AGE"<<endl;
cin>>age;
cin.ignore();
fout<<age;
fout.close();
ifstream fin;
string word;
fin.open("file4.txt");
cout<<"READING THE FILE"<<endl;
while(getline(fin,word))
{
    cout<<word<<endl;
}
fin.close();
return 0;
}
