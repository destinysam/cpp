#include <iostream>
using namespace std;
float simple_interest(float,float);
float simple_interest(float,float,float);
int main()
{
    float principle,roi;
    float time;
    cout<<"ENTER THE PRINCIPLE "<<endl;
    cin>>principle;
    cout<<"ENTER THE TIME"<<endl;
    cin>>time;
    cout<<"ENTER THE RATE OF INTEREST"<<endl;
    cin>>roi;
    cout<<simple_interest(principle,roi)<<endl;
    cout<<simple_interest(principle,roi,time)<<endl;
    return 0;
}
float simple_interest(float x,float y)
{
    float time; 
    float si =0;
    cout<<"ENTER THE TIME PERIOD"<<endl;
    cin>>time;
    si=((x*y*time)/100);
    return si;
}
float simple_interest(float x,float y, float z)
{
    float si= 0;
    si=((x*y*z)/100);
    return si;
}