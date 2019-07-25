#include <iostream>

using namespace std;
int a=70;
namespace var{int a=80;}
int main()
{
    cout <<var::a<< endl;
    return 0;
}
