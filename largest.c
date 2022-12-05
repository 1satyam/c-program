#include<stdio.h>

int main()
{
    int num1,num2,num3,large;
    printf("\nEnter the first number");
    scanf("%d",&num1);
    printf("\nEnter the second number");
    scanf("%d",&num2);
    printf("\nEnter the third number");
    scanf("%d",&num3);

    large=num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
    printf("\n the largest number is : %d",large);
    return 0;
}    