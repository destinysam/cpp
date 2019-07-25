#include <iostream>

using namespace std;
class scope{
public:
    display();
};
void scope :: a.display()
{
    cout<<"scpe reso;ution"<< endl;
}
int main()
{
    scope a;
    return 0;
}
