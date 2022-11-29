#include<stdio.h>

int main()
{
    int  n,i=1, sum=0;
    printf("enter the number");
    scanf("%d",&n);
    while(i<n)
    {
        n=n/i;
        sum=sum+i;
        i++;
    }
    if(n==sum)
    {
        printf("the number is perfct number");
    }
    else
    {
        printf("it is not a perfect number ");
    }
    return 0;
}