//*ranking*//
#include<stdio.h>
void read_students(int a[],int n);
void ascending(int a[],int n);
void main()
{
    int a[100],n;
    printf("Enter the no students:");
    scanf("%d",&n);
    read_students(a,n);
    ascending(a,n);

}
void read_students(int a[],int n)
{
    int i;
    printf(" \n Enter the rankings of the students :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

}
void ascending(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
        {
         if(a[j]>a[j+1])
         {
         temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
         }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n The rankings in ascending order are : %d",a[i]);
    }
        printf("\n The highest ranking is %d",a[n-1]);
        printf("\n The lowest ranking is %d",a[0]);
}
