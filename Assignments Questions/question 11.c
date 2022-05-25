//*total bill*//
#include<stdio.h>
int main()
{
    int n,m[50],total,i;

    printf("enter the number of flats :");
    scanf("%d",&n);
    printf("enter the number of units :");
    for(i=0;i<n;i++)
    {
    scanf("%d",&m[i]);
    }
for(int i=0;i<n;i++)
    {
    if(0<=m[i]>=100)
    {
        total=m[i]*1.5;

    }
    else if(101<=m[i]>=250)
    {
        total=m[i]*2.3;

    }


    else if(251<=m[i]>=600)
    {
        total=m[i]*4.0;

    }

    else
    {
        total=m[i]*5.5;

    }
    printf("Total bill paid by %d th flat is %d",i+1,total);
    }


}
