/*
Author : Aijaz Ahmad Wani
email : aijazahmad9864@gmail.com
Date : 20-7-2019
*/
// library management project
// password = system
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include<cmath>
#include <ctime>
# define add_days 15

int leap_year(int);
void mainmenu(void);
void password(void);
void display_time(void);

using namespace std;

class date
{
private:
    int day,month,year;
public:
      void return_date(void)
    {

    time_t t = time(NULL);
    tm* tPtr = localtime(&t);

    day = tPtr->tm_mday;
    month = (tPtr->tm_mon)+1;
    year = (tPtr->tm_year)+1900;

    day=day+add_days; // current day + 15

    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        if(day>31)
        {
            day = day-31;
            if(month==12)
            {
                month=1;
                year++;
            }
            else
                month++;
        }

    }
    else if(month==4 || month==6 || month==9 || month==11)
    {
        if(day>30)
        {
            day = day-30;
            month++;
        }

    }
    else if(month==2)
    {
        if(leap_year(year))
        {
            if(day>29)
            {
                day=day-29;
                month++;
            }int day,month,year;
        }
        else
        {
            if(day>28)
            {
                day = day-28;
                month++;
            }
        }

    }
    }
    void showreturndate(void)
    {
       cout<<"\t\t\t"<<day<<"-"<<month<<"-"<<year<<endl;
    }
}d;

class student
{
    public:
        int student_id;
    public:
        void getstu(void)
        {
            cout<<"\nEnter student ID ";
            cin>>student_id;
        }
        void showstu(void)
        {
            cout<<"\t\t"<<student_id;
        }

}s;
//student s;
class book
{
    private:
        int bookid;
        char bookauthor[40];
        char booktitle[40];
        float price;
        int quantity;
    public:
        book()  // constructor
        {
            bookid = 0;
            price = 0;
            quantity = 0;
            strcpy(bookauthor,"no title");
            strcpy(booktitle,"no title");
        }
        void getbookdata()
        {
            cout<<"Enter BOOK ID : ";
            cin>>bookid;
            cin.ignore();
            cout<<"TITLE : ";
            cin.getline(booktitle,39);
           // cin.ignore();
            cout<<"AUTHOR : ";
            cin.getline(bookauthor,39);
            cout<<"PRICE : ";
            cin>>price;
            cout<<"QUANTITY : ";
            cin>>quantity;
        }
        void showbookdata()
        {
            cout<<bookid<<"\t"<<booktitle<<"\t\t"<<bookauthor<<"\t\t"<<price<<"\t"<<quantity;
        }
        void storebookdata(void);
        void viewallbooks(void);
        void deletebook(char *);
        void searchbook(char*);
        void updatebook(char*);
        void issuebook(char*);
        void viewissuedbooks(void);
        void removeissuedbook(char*);
};
void book::removeissuedbook(char* issue)
{
    ifstream fin;
    ofstream fout;
    int counter = 0;
    fin.open("issue.dat",ios::binary|ios::in);
    if(!fin)
    {
        cout<<"File not found\n";

    }
    else
    {

    fout.open("issuetemp.dat",ios::binary|ios::app);

    fin.read((char*)this,sizeof(*this));
    fin.read((char*)&s,sizeof(s));
    fin.read((char*)&d,sizeof(d));
    while(!fin.eof())
    {
        if(!strcmp(booktitle,issue))
        {
            counter++;
        }
        if(strcmp(booktitle,issue))
        {
            fout.write((char*)this,sizeof(*this));
            fout.write((char*)&s,sizeof(s));
            fout.write((char*)&d,sizeof(d));
        }
        fin.read((char*)this,sizeof(*this));
        fin.read((char*)&s,sizeof(s));
        fin.read((char*)&d,sizeof(d));

    }
    fin.close();
    fout.close();
    remove("issue.dat");
    rename("issuetemp.dat","issue.dat");
    if(counter == 0)
    {
        cout<<"Book not found!\n";
    }
    else
    {
        cout<<endl<<issue<<" removed successfully\n";
    }

    }

}
void book::viewissuedbooks(void)
{
    ifstream fin;
    int counter = 0;
    fin.open("issue.dat",ios::binary|ios::in);
    if(!fin)
    {
        cout<<"File not found\n";
    }
    else
    {
        fin.read((char*)this,sizeof(*this));
        fin.read((char*)&s,sizeof(s));
        fin.read((char*)&d,sizeof(d));
        if(fin.eof()==1)
        {
            cout<<"NO DATA found!\n";
        }
        cout<<"\nID\tTITLE\t\tAUTHOR\t\tPRICE\tQUANTITY\tIssued to (Student_ID)\tReturn Date\n";
        while(!fin.eof())
        {
            showbookdata();
            s.showstu();
            d.showreturndate();
            fin.read((char*)this,sizeof(*this));
            fin.read((char*)&s,sizeof(s));
            fin.read((char*)&d,sizeof(d));


        }
    }
    fin.close();
}
void book::issuebook(char* issue)
{
    ifstream fin;
    ofstream fout;
    int counter=0;
    char studentname[30];
    fin.open("file.dat",ios::in|ios::binary);
    if(!fin)
    {
        cout<<"File not found\n";
    }
    else
    {


        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            if(!strcmp(issue,booktitle))
            {
                cout<<"Book found! \n";
                cout<<"\nID\tTITLE\t\tAUTHOR\t\tPRICE\tQUANTITY\n";
                showbookdata();
                counter++;
                //student s;
                s.getstu();
                d.return_date();
                fout.open("issue.dat",ios::binary|ios::app);
                fout.write((char*)this,sizeof(*this));
                fout.write((char*)&s,sizeof(s));
                fout.write((char*)&d,sizeof(d));

                cout<<"\nBook issued successfully to student ID : "<<s.student_id;
                cout<<"\nReturn Date =\t ";
                d.showreturndate();

            }
            fin.read((char*)this,sizeof(*this));
        }
    }
    if(counter==0)
    {
        cout<<"No record found\n";
    }
    fin.close();
    fout.close();
}
void book::updatebook(char* update)
{
    fstream f;
    f.open("file.dat",ios::binary|ios::ate|ios::in|ios::out);
    f.seekp(0);
    f.read((char*)this,sizeof(*this));
    while(!f.eof())
    {
        if(!strcmp(update,booktitle))
        {
             getbookdata();
             f.seekp(f.tellp()-sizeof(*this));
             f.write((char*)this,sizeof(*this));
        }
        f.read((char*)this,sizeof(*this));
    }
    f.close();
}
void book::searchbook(char* search_book)
{
    ifstream fin;
    int counter=0;
    fin.open("file.dat",ios::binary|ios::in);
    if(!fin)
    {
        cout<<"File not found\n";
    }
    else
    {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            if(!strcmp(booktitle,search_book))
            {
                cout<<"Book Found!\n";
                cout<<"\nID\tTITLE\t\tAUTHOR\t\tPRICE\tQUANTITY\n\n";
                showbookdata();
                counter++;

            }
        fin.read((char*)this,sizeof(*this));
        }
        fin.close();
    }
    if(counter==0)
    {
        cout<<endl<<search_book<<" not found";
    }
}
void book::deletebook(char* del)
{
    ofstream fout;
    ifstream fin;
    int counter = 0;
    fin.open("file.dat",ios::binary|ios::in);
    if(!fin)
    {
        cout<<"File not found\n";
    }
    else
    {
        fout.open("temp.dat",ios::binary|ios::out);
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
             if(!strcmp(booktitle,del))
             {
                 counter++;
             }
            if(strcmp(booktitle,del))
            {
                fout.write((char*)this,sizeof(*this));
            }
          fin.read((char*)this,sizeof(*this));

        }
        fin.close();
        fout.close();
        if(counter == 0)
        {
            cout<<"Book not found\n\n";
        }
        else
        {
            cout<<endl<<del<<" deleted successfully\n\n";
        }


    }
    remove("file.dat");
    rename("temp.dat","file.dat");
}
void book::viewallbooks(void)
{
    ifstream fin;
    fin.open("file.dat",ios::binary|ios::in);
    if(!fin)
    {
        cout<<"No record found\n";

    }
    else
    {
        cout<<"\nID\tTITLE\t\tAUTHOR\t\tPRICE\tQUANTITY\n\n";
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            showbookdata();
            cout<<endl;
            fin.read((char*)this,sizeof(*this));
        }
        fin.close();

    }
}
void book :: storebookdata(void)
{
    if(bookid==0&&price==0)
    {
        cout<<"Book data not initialized\n";
        exit(0);
    }
    else
    {
        ofstream fout;
        fout.open("file.dat",ios::binary|ios::app);
        fout.write((char*)this,sizeof(*this));
        fout.close();
        cout<<"\n\nRecord Successfully saved !\n";

    }

}
int main()
{

    display_time(); // display current time and date
    password();
    return 0;
}

void mainmenu(void)
{
    while(1){
    book b;
    char title[40];
    int choice;
    cout<<"1. Add Books"<<endl;
    cout<<"2. Delete Books"<<endl;
    cout<<"3. Search Book"<<endl;
    cout<<"4. Update Book Record"<<endl;
    cout<<"5. View Book List"<<endl;
    cout<<"6. Issue Books"<<endl;
    cout<<"7. View issued Books"<<endl;
    cout<<"8. Remove issued Book"<<endl;
    cout<<"9. EXIT / CLOSE "<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        b.getbookdata();
        b.storebookdata();
        break;
    case 2:
        b.viewallbooks();
        cout<<"Enter Book Title to delete record : ";
        cin.ignore();
        cin.getline(title,40);
        b.deletebook(title);
        break;
    case 3:
        cout<<"Enter Book title to search : ";
        cin.ignore();
        cin.getline(title,40);
        b.searchbook(title);
        break;
    case 6:
        b.viewallbooks();
        cout<<"\n\nEnter Book title you want  to issue : ";
        cin.ignore();
        cin.getline(title,40);
        b.issuebook(title);
        break;
    case 5:
        b.viewallbooks();
        break;
    case 4:
        cout<<"Enter Book title which you want to update : ";
        cin.ignore();
        cin.getline(title,40);
        b.updatebook(title);
        break;
    case 7:
        b.viewissuedbooks();

        break;
    case 8:
        b.viewissuedbooks();
        cout<<"Enter Book title you want to remove : ";
        cin.ignore();
        cin.getline(title,40);
        b.removeissuedbook(title);
        break;
    case 9:
        exit(0);
    default:
        cout<<"Wrong choice..........Please enter correct option ";

    }
    }
    return;

}

void password(void)
{
    string pw;
    string a = "system";
    cout<<"******************************************************************************************\n\n";
    cout<<"\t\t\tSPS LIBRARY SRINAGAR\n\n";
    cout<<"******************************************************************************************\n\n";
    cout<<"Enter Password : ";
    cin>>pw;
    if(pw==a)
    {
        cout<<"Password matched ";

        cout<<"\n\nWelcome to SPS LIBRARY SRINAGAR\n\n";

        cout<<"Press Enter to continue \n";
        return ;
        mainmenu();
    }
    else
    {
        cout<<"Wrong password";
        exit(0);
    }


}
void display_time(void)
{
    time_t t = time(NULL);
    tm* tPtr = localtime(&t);
    cout << " \t\t\tCurrent Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
    cout << " \t\t\tCurrent Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl;
}

int leap_year(int year)
    {
        if((year%100==0)&&(year%400==0))
        {
            return 1;
        }

        else if(year%4==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }

    }