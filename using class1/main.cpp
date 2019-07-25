#include <iostream>

using namespace std;
class humanbeing{
public:
    string name;
    char sex;
    string address;
    long int mobile_no;
    void display(string name,char sex,string address,long int mobile_no)
    {
        cout<<"THE DETAILS OF A PERSON  WHICH INCLUDE NAME,SEX,ADDRESS,MOBILE_NO ARE\n";
        cout<<name<<endl<<sex <<endl<<address <<endl<<mobile_no <<endl;
        cout<<name<<endl<<sex<<endl<<address<<endl<<mobile_no<<endl;
    }
};
int main()
{

    humanbeing student1;
    humanbeing student2;
    student1.display("sameer",'m',"tarigam",6005840594);
    student2.display("yasir",'m',"kanigam",7006972808);
    return 0;
}
