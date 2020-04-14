#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("database.dat");
    fout<<"HELLO WARFAN ";
    fout<<"HOW R U "<<endl;
}