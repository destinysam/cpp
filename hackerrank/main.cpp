#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class student
{
private:
int age;
int standard;
string first_name;
string last_name;
public:
void set_age(int iage)
{
    age=iage;
}
void set_standard(int istandard)
{
    standard=istandard;
}
void set_first_name(string ifirst_name)
{
    first_name=ifirst_name;
}
void set_last_name(string ilast_name)
{
    last_name=ilast_name;
}
int get_age()
{
return (age);
}
int get_standard()
{
    return (standard);
}
string get_first_name()
{
    return(first_name);
}
    string get_last_name()
    {
        return(last_name);
    }
    string to_string()
    {
        stringstream ss;
        char c = ',';
        ss << age << c << first_name << c << last_name << c << standard;
        return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() <<" "<< st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}

