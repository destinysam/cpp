#include <iostream>
//CODED BY SAM @SAMEER//
using namespace std;
class human //wITHOUT ACCESS SPECIFIER IT IS NOT POSSIBLE TO CALL THE FUNCTION//
{
    human()
    {
        cout<<"DEFAULT CONSTRUCTOR"<<endl;
    }
};
int main()
{
    human yasir;
    yasir.human();
    return 0;
}
