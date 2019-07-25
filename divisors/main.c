#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,a,count=0;
    printf("enter the value of i,j,k\n");
    scanf("%d%d%d",&i,&j,&k);
  for(a=i;a<=j;a++)
    {
        if(a%k==0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
