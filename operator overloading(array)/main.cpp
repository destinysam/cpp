#include <iostream>
#define n 3
#define m 3
/*CODED BY SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROGRAM:ADDITION OF TWO MATRIX USING OPERATOR OVERLOADIND*/
using namespace std;

class operatorr
{
    int array1[n][m];
   public:
       void getdata()
       {

    int i,j;
    cout<<"ENTER THE  DATA ELEMENTS OF ARRAY"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>array1[i][j];/*TAKING INPUTS FROM THE USER*/
        }
    }
       }
       void display()/*DISPLAYING FIRST AND SECOND MATRIX*/
       {

           for(int i=0;i<n;i++)
           {
               for(int j=0;j<m;j++)
               {
                   cout<<array1[i][j]<<"\t";
               }
               cout<<"\n";
           }
       }
       operatorr operator+(operatorr p)/*OVERLOADING FUNCTION*/
       {
           int array2[n][m];
           for(int i=0;i<n;i++)
           {
               for(int j=0;j<m;j++)
               {
                   array2[i][j]=array1[i][j]+p.array1[i][j];/*ADDING FIRST ELEMENT TO FIRST ELEMENT OF MATRIX
                   AND STROING INTO ANOTHER MATRIX*/
               }
           }
           cout<<"ADDITION OF TWO MATRIX IS "<<endl;
           for(int i=0;i<n;i++)
           {
               for(int j=0;j<m;j++)
               {
                   cout<<array2[i][j]<<"\t";/*DISPLAYING THE ADDITION OF MATRIX*/
       }
       cout<<"\n";
           }
       }
};
int main()
{
    operatorr first,second;
    first.getdata();/*FUNCTION CALL TO GET INPUT FROM THE USER*/
    second.getdata();/*FUNCTION CALL TO GET INPUT FROM THE USER*/
    cout<<"first matrix"<<endl;
    first.display();
    cout<<"second matrix"<<endl;
    second.display();
    first+second;
    return 0;
}
