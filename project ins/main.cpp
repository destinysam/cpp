#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class institute
{
    protected:
    char student_name[100];
    char fathers_name[100];
    char address[100];
    long int ph_no;
    public:
    void add_student_details();
    void get_show_allstudent_details();
    void add_student();
    void display_students();
    void search_student();
}obj1;
void institute::add_student_details()
{
    ofstream file1;
    file1.open("basedat.dat",ios::binary|ios::app);
    if(!file1)
    {
        cout<<"FILE NOT FOUND"<<endl;
        return;
    }
    add_student();
    file1.write((char*)&obj1,sizeof(obj1));
    file1.close();
    cout<<"RECORD SUCCESSFULLY SAVED\n";
}
void institute::add_student()
{
    cout<<"ENTER THE NAME OF STUDENT"<<endl;
    cin.ignore();
    cin.getline(student_name,100);
    cout<<"ENTER THE FATHERS NAME OF STUDENT"<<endl;
    cin.getline(fathers_name,100);
    cout<<"EENTER THE ADDRESS OF STUDENT"<<endl;
    cin.getline(address,100);
    cout<<"ENTER THE PH NO OF STUDENT"<<endl;
    cin>>ph_no;
    }
    void institute::get_show_allstudent_details()
    {
        ifstream cif;
        cif.open("basedat.dat",ios::binary|ios::in);
        if(!cif)
        {
        cout<<"FILE NOT FOUND"<<endl;
        return;
        }
        cif.read((char*)&obj1,sizeof(obj1));
        while(!cif.eof())
        {
          display_students();
        cout<<endl;
        cif.read((char*)&obj1,sizeof(obj1));
        }    
        cif.close();
        }
        void institute::display_students()
        {
            cout<<"STUDENT NAME: "<<student_name<<endl<<"FATHERS NAME: "<<fathers_name<<endl<<"ADDRESS: "<<address<<endl<<"PHONE_NO: "<<ph_no<<endl;
        }
        void institute::search_student()
        {
            char search_student[100];
            ifstream cif;
            int counter= 0;
             cout<<"ENTER THE NAME OF THE STUDENT"<<endl;
             cin.ignore();
             cin.getline(search_student,100);
             cif.open("basedat.dat",ios::binary|ios::in);
        if(!cif)
        {
        cout<<"FILE NOT FOUND"<<endl;
        return;
        }
        cif.read((char*)&obj1,sizeof(obj1));
        while(!cif.eof())
        {
            if(!strcmp(student_name,search_student))
            {
                cout<<"BOOK FOUND"<<endl;
                display_students();
                counter++;
            }
             cif.read((char*)&obj1,sizeof(obj1));
        }
            cif.close();
            if(counter==0)
            {
                cout<<search_student<<" NOT FOUND"<<endl;
            }
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
    cout<<"1.ADD_BOOK\n2.SHOW_BOOK\n3.SEARCH_BOOK\n4.EXIT"<<endl;
    cout<<"ENTER YOUR CHOICE"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        obj1.add_student_details();
        break;
        case 2:
        obj1.get_show_allstudent_details();
        break;
        case 3:
        obj1.search_student();
        break;
        case 4:
        exit(1);
        default:
        cout<<"U ENTERED WRONG KEY\n";
    }
        }
        return 0;
    }