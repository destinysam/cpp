//CODED BY SAM@SAMEER
//EMAIL:SAMS44802@GMAIL.COM
//DATE:18/11/2019
//WORKTYPE: MINOR PROJECT
//WORKING OF THIS PROJECT:THIS PROGRAM CAN MAKE A LIST OF ITEMS BOUGHT BY THE CUSTOMER 
//ADDDING NEW ITEMS TO THE LIST
//IT CAN DISPLAY THE LIST OF ITEMS
//IT CAN SHOW THE TOTAL PRICE OF THE LISTED ITEMS
//IT CAN REMOVE THE ITEM FROM THE LISTED_ITEMS
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class item // DEFINING CLASS 
{
    string item_name[100];
    int item_price[100];
    string item_code[100];
    public:
    void add_item(int);
    void remove_item(int);
    void total_price(int);
    void display_items(int);
}obj1;
void item::add_item(int siz) // FUNCTION TO MAKE LIST OF ITEMS
{
    int size;
    cout<<"WELCOME TO THE V MART SHOPPING MALL"<<endl;
    for(int i=0;i<siz;i++)
    {
    cout<<"TYPE THE NAME OF THE ITEM :"<<endl;
    cin>>item_name[i];
    cout<<"TYPE THE CODE OF THE ITEM :"<<endl;
    cin>>item_code[i];
    cout<<"TYPE THE PRICE OF THE ITEM :"<<endl;
    cin>>item_price[i];
    }
}
void item::remove_item(int siz)   //FUNCTION TO REMOVE ITEMS FROM THE LIST
{
    string item_removed;
    cout<<"TYPE THE NAME OF THE ITEM "<<endl;
    cin>>item_removed;
    for(int i=0;i<siz;i++)
    {
     if(item_removed==item_name[i])
       {
         item_name[i] = "removed";
         item_code[i] = "0";
         item_price[i]= 0;
         cout<<"ITEM REMOVED SUCCESSFULLY"<<endl;
         break;
        }
        else
        {
            continue;
        }
        
    } 
}
void item::display_items(int siz)
{
    cout<<"ITEMS BUY BY THE CUSTOMER :"<<endl;
    cout<<"ITEMS"<<"\t"<<"PRICE"<<"\t"<<"ITEM CODE"<<endl;
    for(int i=0;i<siz;i++)
    {
        cout<<item_name[i]<<"\t"<<item_price[i]<<"\t"<<item_code[i]<<endl;
    }
}
void item::total_price(int siz)
{
    int total_price = 0;
    for(int i=0;i<siz;i++)
    {
      total_price = total_price + item_price[i];
    }
    cout<<"TOTAL PRICE = "<<total_price<<endl;
}
int main()
{
    string password;
    int choice;
    int size;
    string personal_password = "sameer123";
    cout<<"***PLEASE TYPE YOUR PERSONAL PASSWORD TO ACCESS THE ACCOUNT***"<<endl;
    cin>>password;
    if(password==personal_password)
    {
        cout<<"*********WELCOME TO V MART SHOPPING MALL*******"<<endl;
    }
    else
    {
        cout<<"U TYPE THE WRONG PASSWORD "<<endl;
        exit(0);
    }
    cout<<"TYPE THE SIZE OF ITEMS :"<<endl;
    cin>>size;
    while(true)
    {
    cout<<"1. MAKING BUYING ITEMS LIST\n2. DISPLAY_BUYING ITEMS\n3. REMOVE_ITEM\n4. TOTAL PRICE\n5. QUIT\n";
    cout<<"TYPE YOUR CHOICE TO PROCEED THIS PROCESS :"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        obj1.add_item(size);
        break;
        case 2:
        obj1.display_items(size);
        break;
        case 3:
        obj1.remove_item(size);
        break;
        case 4:
        obj1.total_price(size);
        break;
        case 5:
        exit(1);
        default:
        cout<<"*******\a SORRY U CHOSED WRONG KEY *******"<<endl;
    }
}
return 0;
}
