#include<stdio.h>

int main()
{
    int p, r,t;
    int si=0;
    printf("Enter the prinpal");
    scanf("%d",&p);
    printf("Enter the rate");
    scanf("%d",&r);
    printf("Enter the time");
    scanf("%d",&t);
    si=(p*r*t)/100;
    printf("the simple interest is %d",si);
    return 0;
}