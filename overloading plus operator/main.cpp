#include <iostream>

using namespace std;
class operation
{
    int a;
    int b;
public:
    void getdata(int x,int y)/*FUNCTION DEFINITION*/
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"THE SUM OF TWO NOS IS\n"<<a<<"\t"<<b<<endl;
    }
    operation operator+(operation c) /*FUNCTION DEFINNITION OF OVERLOADDING FUNCTION*/
    {
        operation temp;
        temp.a=a+c.a;/* a defines first element of object c1 and(c.a) defines first element of object c2*/
        temp.b=b+c.b;/* b defines second element of object c1 and(c.b) defines second element of object c2*/
        return(temp);
    }
};
int main()
{
    operation c1,c2,c3;
    c1.getdata(3,4);/*FUNCTION CALL*/
    c2.getdata(4,2);/*FUNCTION CALL*/
    c3=c1+c2;/*C1 IS CALLING OBJECT AND C2 IS AN ARGUMENT */
/* oR WE CAN DEFINE IT C3=C1.OPERATOR+(C2)*/
    c3.display();
    return 0;
}
