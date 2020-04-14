#include <iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class book
{
protected:
    char book_name[100];
    char author[100];
    int quantity_books;
    int book_id;
    public:
    void add_book_details();
    void add_book();
    void show_books();
    void show_all_books();
    void search_book();
    void menu();
}obj1;
class student
{
protected:
char student_name[100];
char book_name[100];
string class_name;
int roll_no;
int book_id;
public:
void issue_book();
void remove_book();
void display_issued_books();
void issued_books();
}obj2;
void book::add_book_details()
{
 ofstream file;
        file.open("system.dat",ios::binary|ios::app);
        if(!file)
        {
            cout<<"FILE NOT FOUND"<<endl;
            return;
        }
obj1.add_book();
file.write((char*)&obj1,sizeof(obj1));
file.close();
cout<<"RECORD SAVED SUCCESSFULLY "<<endl;
}
 void book::add_book()
    {
        cout<<"ENTER THE DETAILS OF THE BOOK"<<endl;
        cout<<"ENTER THE BOOK_NAME"<<endl;
        cin.ignore();
        cin.getline(book_name,100);
        cout<<"ENTER THE AUTHOR OF THE BOOK"<<endl;
        cin.getline(author,100);
        cout<<"ENTER THE BOOK_ID"<<endl;
        cin>>book_id;
        cout<<"ENTER THE QUANTITY_BOOKS"<<endl;
        cin>>quantity_books;
        if(strcmp(book_name,author)==0)
{
    cout<<"U HAVE NOT ENTERED THE COMPLETE DETAILS OF BOOK"<<endl;
    exit(1);
}
    }
    void book::show_all_books()
    {
    ifstream file1;
    file1.open("system.dat",ios::binary|ios::in);
    if(!file1)
    {
        cout<<"FILE NOT FOUND"<<endl;
        return;
    }
    file1.read((char*)&obj1,sizeof(obj1));
    while(!file1.eof())
    {
    obj1.show_books();
    cout<<endl;
     file1.read((char*)&obj1,sizeof(obj1));
    }
    file1.close();
    }
 void book::show_books()
{
        cout<<"BOOK NAME "<<book_name<<"\t"<<"BOOK ID "<<book_id<<"\t"<<"AUTHOR "<<author<<endl;
}
void book::search_book()
{
    int temp=0;
    char ser_book[100];
    ifstream file1;
    cout<<"ENTER THE BOOK NAME"<<endl;
    cin.ignore();
    cin.getline(ser_book,100);
    file1.open("system.dat",ios::binary|ios::in);
    if(!file1)
    {
        cout<<"FILE NOT FOUND"<<endl;
        return;
    }
    file1.read((char*)&obj1,sizeof(obj1));
    while(!file1.eof())
    {
        if(!strcmp(book_name,ser_book))
        {
         cout<<"BOOK FOUND"<<endl;
          show_books();
          temp++;
        }
     file1.read((char*)&obj1,sizeof(obj1));
    }
    file1.close();
    if(temp==0)
    {
        cout<<ser_book<<" NOT FOUND"<<endl;
        exit(1);
    }
}
void student::issue_book()
{
    obj1.search_book();
  ofstream fil;
        fil.open("database.dat",ios::binary|ios::app);
        if(!fil)
        {
            cout<<"FILE NOT FOUND"<<endl;
            return;
        }
cout<<"ENTER THE BOOK NAME WHICH U WANT TO ISSUE"<<endl;
cin.getline(book_name,100);
cout<<"ENTER THE NAME OF STUDENT WHICH WANTS TO ISSUE THE BOOK"<<endl;
cin.getline(student_name,100);
cout<<"ENTER THE CLASS NAME OF STUDENT"<<endl;
cin>>class_name;
cout<<"ENTER THE ROLL NO OF STUDENT"<<endl;
cin>>roll_no;
cout<<"ENTER THE BOOK_ID OF THE BOOK"<<endl;
cin>>book_id;
fil.write((char *)&obj2,sizeof(obj2));
fil.close();
cout<<"RECORD SAVED SUCCESSFULLY "<<endl;
}
void student::issued_books()
{
cout<<"BOOK NAME :"<<book_name<<"\t"<<"STUDENT NAME :"<<student_name<<"\t"<<"CLASS NAME :"<<class_name<<"\t"<<"ROLL NO :"<<roll_no<<"\t"<<"BOOK_ID :"<<book_id<<endl;
    cout<<endl;
}
void student::display_issued_books()
{
    ifstream fil1;
    fil1.open("database.dat",ios::binary|ios::in);
    if(!fil1)
    {
        cout<<"FILE NOT FOUND"<<endl;
        return;
    }
    fil1.read((char *)&obj2,sizeof(obj2));
    while(!fil1.eof())
    {
    obj2.issued_books();
    fil1.read((char *)&obj2,sizeof(obj2));
    }
    fil1.close();
}
int main()
{
    string password;
    int choice;
    cout<<"*****************WELCOME TO SPS LIBRARY MANAGEMENT******************"<<endl;
    cout<<"************ENTER YOUR PASSWORD TO ACCESS THE ACCOUNT*********"<<endl;
    cin>>password;
    if(password=="sameer")
    {
       cout<<"PLEASE CHOOSE ANY OPTION FROM THE BELOW "<<endl;
    }
    else
        return 0;
        while(1)
        {
    cout<<"1.ADD_BOOK\n2.SHOW_BOOK\n3.SEARCH_BOOK\n4.ISSUE_BOOK\n5.DISPLAY_ISSUED_BOOK\nEXIT"<<endl;
    cout<<"ENTER YOUR CHOICE"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
    obj1.add_book_details();
    break;
    case 2:
    obj1.show_all_books();
    break;
    case 3:
    obj1.search_book();
    break;
    case 4:
    obj2.issue_book();
    break;
    case 5:
    obj2.display_issued_books();
    break;
    case 6:
    exit(1);
    default:
        cout<<"U ENTERED WRONG CHOICE\a\a"<<endl;
    }
        }
    return 0;
}
