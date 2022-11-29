#include<stdio.h>

int main()
{
    int l, b;
    printf("enter length of the rectangle.");
    scanf("%d",&l);
    printf("enter breadth of rectangle.");
    scanf("%d",&b);
    printf("the area of the rectangle is  %d\n",l*b);
    printf("the preimeter of the rectangle is %d",2*(l+b));
    return 0;
}