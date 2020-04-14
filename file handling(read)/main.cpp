#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char character;
    fin.open("database.dat");
 // fin>>ch;
    character=fin.get();
    while(!fin.eof())
    {
        cout<<character;
    //    fin>>ch;
        character=fin.get();
    }
    fin.close();
    return 0;
}