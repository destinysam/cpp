#include <iostream>

using namespace std;

int main()
{
 int sum = 0;
 int n = 11;
 for(int i=1;i<1000;i++){
    if(i%3==0 || i%5==0)
        sum+=i;
 }
    cout << "Sum: " << sum;

    return 0;
}
