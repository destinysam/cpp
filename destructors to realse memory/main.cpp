#include <iostream>
#include<string.h>
using namespace std;
//CODED BY SAM @SAMEER//
//PROGRAM TO RELEASE MEMORY BY USING POINTERS//
class human
{
private:
    string *name; //USING POINTER TO STORE RETURN ADDRESS(dynamic memory)//
    int *age;
public:
    human(string iname,int iage)
    {
        cout<<"constructor created"<<endl; //CONSTRUCTOR//
        name=new string; //using a dynamic memory allocation//
        age=new int; //using dynamic memory allocation//
        *name=iname;
        *age=iage;
    }
    void display()
    {
        cout<<"HYY MY NAME IS "<<*name<<" AND I M "<<*age<<" years old"<<endl;
        //refering value stored in the memory pointed by the pointer name//
    }
    ~human() //DESTRUCTOR THAT IS DENOTED BY ~//
    {
        delete name;
        delete age;
        cout<<"MEMORY RELEASED\n"<<endl;
    }
};
int main()
{
    human *sameer=new human("yasir",23);
    sameer->display();//BY USING ARROW OPERATOR BECOZ WE HAVE USED  POINTER TO ACCESS THE MEMBER FUNCTION OF CLASS//
    delete sameer; //BY USIND DELETE KEYWORD TO RELEASE MEMORY//
    return 0;
}
