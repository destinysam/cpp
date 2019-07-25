#include <stdio.h>
#include <stdlib.h>
#define months 5
#define years 3
/*CODED BY  SAM@SAMEER
EMAIL:SAMS44802@GMAIL.COM
PROJECT:TAKING THE RAINFALL FROM THE USER AND TO DISPLAY THE AVERAGE RAINFALL PER YEAR
 AVERAGE RAINFALL PER MONTH,HIGHEST AND LOWEST RAINFALL OVER A YEAR AND MONTH*/
int rainfall[years][months];
int arey[years];
int arem[months];
int i,j,a,sum,max;
int avg;
void menu();
void display();
void avg_rainfall_each_year();
void avg_rainfall_every_month();
void heighest_avg_rainfall_decade();
void heighest_avg_rainfall_of_month();
void data();
int main()
{

    int choice;
    data();/*CALL TO DATA FUNCTION*/
    while(1)
    {

    system("cls");
    menu();/*CALL TO MENU FUNCTION WHERE CHOICES ARE DISPLAYED*/
    printf("\nEnter your choice :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        display();
        break;
    case 2:
        avg_rainfall_each_year();/*GO TO AVG_RAINFALL FUNCTION_EACH_YEAR*/
        break;
    case 3:
        avg_rainfall_every_month();
       break;
    case 4:
        heighest_avg_rainfall_decade();
        break;
    case 5:
         heighest_avg_rainfall_of_month();
        break;
    case 6:
        exit(0);/*EXCUTING THE PROGRAM*/
    default :
        printf("\nInvalid choice..........Try again");
    }
    getch();
    }
}

void menu()
{
    printf("\n1. Display Rainfall Array");
    printf("\n2. Display average rainfall of defined years");
    printf("\n3. Average rainfall of every month over a period of defined years");
    printf("\n4. Heighest average rainfall of decade");
    printf("\n5. Heighest average rainfall of month over last defined years");
    printf("\n6. Exit");
    printf("\n\n\n\n*******************************************************");
}

void display()/*DISPLAYING DATA IN ARRAY */
{
    printf("\tRainfall Array\n\n");
   for(i=0;i<years;i++)
   {
       for(j=0;j<months;j++)
        {
        printf("%d\t",rainfall[i][j]);
        }
    printf("\n");

   }

 }

void avg_rainfall_each_year()
{
    for(i=0;i<years;i++)
    {
        for(j=0;j<months;j++)
        {
            sum=sum+rainfall[i][j];
        }
        avg=0;
        avg=sum/months;
        arey[a]=avg;
        a++;
        sum=0;
    }
    printf("\nAverage rainfall of each year\n");
    for(i=0;i<years;i++)
        printf("%d\n",arey[i]);
}

void heighest_avg_rainfall_decade()
{
    max=arey[0];
    for(i=1;i<years;i++)
    {
        if(arey[i]>max)
            max=arey[i];
    }
    printf("\nHeighest avg. rainfall of decade = %d",max);

}

void avg_rainfall_every_month()
{
    sum=0,a=0;
    for(i=0;i<months;i++)
    {
        for(j=0;j<years;j++)
        {
            sum=sum+rainfall[j][i];
        }
        avg=0;
        avg=sum/years;
        arem[a]=avg;
        a++;
        sum=0;

    }
    printf("\nAverage rainfall of every month over a period of 10 years\n");
    for(i=0;i<months;i++)
        printf("%d\t",arem[i]);
}

void heighest_avg_rainfall_of_month()
{
    max=arem[0];
    for(i=1;i<months;i++)
    {
        if(arem[i]>max)
            max=arem[i];
    }
    printf("\nHeighest average rainfall of month over last decade = %d",max);
}

void data()/*TAKING RAINFALL DATA YEARLY AND MONTHLY*/
{
    printf("Enter the rainfall data \n");
    for(i=0;i<years;i++)
    {
        for(j=0;j<months;j++)
        {
            scanf("%d",&rainfall[i][j]);
        }
    }
}
