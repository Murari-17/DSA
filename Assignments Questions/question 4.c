//*average of class*//
#include<stdio.h>
float average(int a[],int n);
void main()
{
    int a[100],n,i,a_count=0,b_count=0;
    printf("Enter the no of students:");
    scanf("%d",&n);
    printf("Enter the marks of students:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    float avg=average(a,n);
    printf("\n The class average is : %f",avg);
    for(i=0;i<n;i++)
    {        if(a[i]>avg)
        a_count++;
    }
    printf(" \n The no of students above average %d",a_count);
for(i=0;i<n;i++)
{
    if(a[i]<avg)
    b_count++;

}
printf("\n The no students below average %d",b_count);
}
float average(int a[],int n)
{
    int sum=0,i;
    float avg;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
    avg=sum/(n*1.0);
    return avg;

}
