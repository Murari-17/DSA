//*read and display*//
#include<stdio.h>
#include<stdlib.h>
void read(int a[],int n);
void disp(int a[],int n);
int sum(int a[],int n);
int main()
{
    int a[100],i,n;

    printf("enter the size of array");
    scanf("%d",&n);

    if(n<=0||n>100)
    {
        printf("invalid array size");
        exit(0);
    }
    read(a,n);
    disp(a,n);
    int s=sum(a,n);
    printf(" \n the sum= %d",s);

}

    void read(int a[],int n)
    {
        int i;

        printf("enter the elements in array");

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    }

    void disp(int a[],int n)
    {
        int i;

        printf("display elements in an array");
        for(i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
    }

    int sum(int a[],int n)
    {
        int i,num,s=0;

         for(i=0;i<n;i++)
         {
             int largest =0;
             num=a[i];
             while(num>0)
             {
                 int rem;
                 rem=num%10;
                     if(rem>largest)
                     {
                         largest=rem;
                     }
                     num=num/10;
                 }
         printf("\n The maximum digit in a[%d] is %d",i,largest);
                 s=s+largest;
             }
return s;
         }














