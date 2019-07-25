#include <iostream>

using namespace std;

void double();
void double()
{
    static int var=0;
     cout<<++var<<endl;
}
int main()
{
    for(int i=0;i<5;i++){
        double();
    }
    return 0;
}
