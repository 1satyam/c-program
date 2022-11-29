#include<stdio.h>

int main()
{
    int m, n,c;
    printf("Enter the value of m");
    scanf("%d",&m);
    printf("Enter the value of n");
    scanf("%d",&n);
    c=m+n;
    m=c-m;
    n=c-n;
    printf("after swapping\n");
    printf("the m is %d\n",m);
    printf("the n is %d",n);
    return 0;
}