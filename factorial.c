#include<stdio.h>

int main()
{
    int num,result=1;
    printf("Enter the number");
    scanf("%d",&num);
    while(num>=1)
    {
        result*=num;
        num--;
    }
 printf(" the factorial of the number is %d",result);
return 0;
}