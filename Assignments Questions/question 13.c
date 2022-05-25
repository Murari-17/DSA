//*read and display and perfect number*//
#include<stdio.h>
void read(int a[],int n);
void disp(int a[],int n);
void perf(int a[],int n);
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
    perf(a,n);

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

    void perf(int a[],int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            int r,sum=0;
            r=a[i];
             for(i=1;i<r;i++)
             {
                 if(r%i==0)
                    {
                     sum+=i;
                    }


             }

        if(sum==r)
        {
            printf("%d is perfect number",r);
        }

        else
        {
            printf("%d is not perfect number",r);
        }
             }
    }
















