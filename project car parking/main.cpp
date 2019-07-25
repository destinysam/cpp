#include<iostream>
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROJECT:CAR PARKING*/
using namespace std;
int main()
{
    int parking_area=10;
    int amount=0;
int total_vehicles=0;
int choice;
int count=0;
int bus=0,truck=0,car=0;
while(1)
{
cout<<"1.BUS\n2.TRUCK\n3.CAR\n4.DISPLAY\n5.DELETE RECORD\n";
cout<<"ENTER THE CHOICE FROM ABOVE VEHCILES\n";
cin>>choice;
while(parking_area--)
{
if(choice==1)
{
    bus=bus+1;
    amount=amount+100;
    cout<<"PLEASE COLLECT THE PARKING FEE\n";
}
else if(choice==2)
{
    truck=truck+1;
    amount=amount+150;
    cout<<"PLEASE COLLECT THE PARKING FEE\n";
}
else if(choice==3)
{
    car=car+1;
    amount=amount+50;
    cout<<"PLEASE COLLECT THE PARKING FEE\n";
}
else if(choice==4)
{
    cout<<"TOTAL NO OF BUSES "<<bus<<endl;
    cout<<"TOTAL NO OF TRUCKS "<<truck<<endl;
    cout<<"TOTAL NO OF CARS   "<<car<<endl;
    cout<<"TOTAL AMOUNT "<<amount<<endl;
}
else if(choice==5)/*DELETION CASE*/
{
    amount=0;
    car=0;
    truck=0;
    bus=0;
}
else 
cout<<"U ENTERED WRONG KEY\n";
continue;
break;
}
}
return 0;
}