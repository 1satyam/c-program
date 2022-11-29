#include<stdio.h>

int main()
{
    int n,r=0,rev=0;
    printf("enter any number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
        printf("the reverse of number is %d",rev);
    return 0;
}
