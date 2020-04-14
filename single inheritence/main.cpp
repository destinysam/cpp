#include<iostream>
using namespace std;
class car
{
    private:
    string engine_type;
    int price;
    string fuel_type;
    string car_name;
    string steering_type;
    public:
    void get_car_data();
    void show_car_data();
};
void car::get_car_data()
{
    cout<<"TYPE THE CAR DETAILS :"<<endl;
    cout<<"TYPE THE CAR NAME :"<<endl;
    cin>>car_name;
    cout<<"TYPE THE ENGINE TYPE :"<<endl;
    cin>>engine_type;
    cout<<"TYPE THE FUEL_TYPE :"<<endl;
    cin>>fuel_type;
    cout<<"TYPE THE STEERING TYPE :"<<endl;
    cin>>steering_type;
}
void car::show_car_data()
{
    cout<<"HUNDAUI PRESENTS NEW SPORTS CAR :"<<endl;
    cout<<"CAR NAME "<<car_name<<"\n"<<"ENGINE TYPE "<<engine_type<<"\n";
    cout<<"FUEL TYPE "<<fuel_type<<"\n"<<"STEERING TYPE "<<steering_type<<"\n";
}
class sports_Car:public car
{
    private:
    string body_type;
    string tyre_type;
    string break_type;
    string air_bags;
    public:
    void get_sportscar_details();
    void show_all_cardetails();
};
void sports_Car::get_sportscar_details()
{
    cout<<"ENTER  THE BODY TYPE OF CAR "<<endl;
    cin>>body_type;
    cout<<"ENTER THE TYRE TYPE OF CAR "<<endl;
    cin>>tyre_type;
    cout<<"ENTER THE BREAK TYPE OF CAR "<<endl;
    cin>>break_type;
    cout<<"IF AIR BAGS ARE PRESENT TYPE YES ELSE NO "<<endl;
    cin>>air_bags;
}
void sports_Car::show_all_cardetails()
{
    show_car_data();
    cout<<"BODY TYPE "<<body_type<<"\n"<<"TYRE TYPE "<<tyre_type<<"\n"<<"BREAK TYPE "<<break_type<<"\n";
    cout<<"AIR_BAGS "<<air_bags<<"\n";
}
int main()
{
    sports_Car obj1;
    obj1.get_car_data();
    obj1.get_sportscar_details();
    obj1.show_all_cardetails();
    return 0;
}