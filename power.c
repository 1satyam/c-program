#include<stdio.h>
 
 int main()
 {
    int b,p,result=1;
    int i=1;
    printf("enter the base number ");
    scanf("%d",&b);
    printf("Enter the power of the base");
    scanf("%d",&p);
    while(i<=p)
    {
        result=result*b;
        i++;
    }
        printf("the number is %d",result);
    return 0;
 }
