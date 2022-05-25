//*income tax*//
#include<stdio.h>
float average(int a[],int n);
void main()
{
    int a[100],n,i,mcount=0,bcount=0;
    printf("Enter the no tax payers :");
    scanf("%d",&n);
    printf("\n Enter the tax paid by tax payers:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    float avg=average(a,n);
    printf("The average tax paid by the tax payers:%f",avg);
    for(i=0;i<n;i++)
    {

        if(a[i]>250000)
        {
            mcount++;
        }
    }
    printf("\n The no tax payers paid tax above 250000 is %d:",mcount);
    for(i=0;i<n;i++)
    {
        if(50000>a[i]<150000)
        {
            bcount++;
        }
        printf("The no tax payers paid tax between 50000 to 150000 is %d:",bcount);
    }
}
float average(int a[],int n)
{
    int i, sum=0;
    float avg;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    return avg;
}
