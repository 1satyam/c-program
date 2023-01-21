#include<stdio.h>

int main()
{
    int n, rem=0,rev=0;
    int q;
    printf("enter the number :");
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        rem=q%10;
        rev=rev*10+rem;
        q/=10;
    }
    if(rev==n)
    { 
        printf("the number is palindrome");
    }
    else
    {
        printf("the number is not palindrome");
    }
    return 0;
}