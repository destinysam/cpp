#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class budget
{
    protected:
    char product_name[100];
    char date[50];
    int money_spend;
    char delete_product_name[100];
    char delete_date[50];
    public:
    void add_budget_details();
    void delete_budget_details();
    void show_budget_details();
}obj1;
void budget::add_budget_details()
{
    ofstream  fout;
    cout<<"TYPE THE PRODUCT NAME, DATE(e,g 21_05_2019), AND HOW MUCH U SPEND MONEY ON PRODUCT"<<endl;
    fout.open("database.dat",ios::binary|ios::app);
    if(!fout)
    {
        cout<<"FILE NOT FOUND"<<endl;
        return;
    }
    cin.getline(product_name,100);
    cin.getline(date,50);
    cin>>money_spend;
    fout.write((char*)&obj1,sizeof(obj1));
    fout.close();
    cout<<"RECORD SAVED SUCCESSFULLY"<<endl;
}
void budget::show_budget_details()
{
    ifstream fin;
    fin.open("database.dat",ios::in);
    if(!fin)
    {
        cout<<"FILE NOT FOUND"<<endl;
        return;
    }
    cout<<"YOUR PERSONAL BUDGET RECORD"<<end
    l;
    fin.read((char*)&obj1,sizeof(obj1));
    while(!fin.eof())
    {
        cout<<product_name<<" "<<date<<" "<<money_spend<<endl;
        fin.read((char*)&obj1,sizeof(obj1));
    }
    fin.close();
}
void budget::delete_budget_details()
{
    ifstream fin;
    cout<<"TYPE THE PRODUCT NAME AND THE DATE(e,g 10/12/2019)"<<endl;
    cin.getline(delete_product_name,100);
    fin.open("database.dat",ios::in);
    fin.read((char*)&obj1,sizeof(obj1));
    while(fin.eof())
    {
       if(!strcmp(delete_product_name,product_name))
       {
           remove(product_name);
           cout<<"PRODUCT NAME SUCCESSFULLY DELETED"<<endl;
        }
    }    
    fin.close();
}
int main()
{
    char password[100];
    char pass = "destinysam"
    cout<<"TYPE YOUR PERSONAL PASSWORD PLEASE"<<endl;
    while(1)
    {
        
    }
    cin.getline(password,100);
    obj1.add_budget_details();
    obj1.show_budget_details();
    return 0;
}