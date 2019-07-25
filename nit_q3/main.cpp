#include <iostream>

using namespace std;

int main()
{
    bool solved = false;
    long n =1;
    long long m = 60083;
    long big = 1;
    while(!solved){
        if(n>m){
            break;
        }
        bool prime = true;
        for(long i=2; i < n; i++){
            if(n%i==0){
                prime = false;
            }
        }
        if(prime){
            if(m%n==0 && n > big){
                big = n;
            }
        }
        n++;
    }
    cout << big;
    return 0;
}
