#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("after swapping\n");
    printf("the a is %d\n",a);
    printf("the b is %d",b);
    return 0;
}