#include<stdio.h>

int main()
{
    int n,r=0,sum=0;
    printf("Enter any number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("the sum of digit is %d",sum);
    return 0;

}