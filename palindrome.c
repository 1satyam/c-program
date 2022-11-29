#include<stdio.h>

int main()
{
    int n, r=0,rev=0;
    int c;
    //clrscr();
    printf("enter the number");
    scanf("%d",&n);
    c=n;
    do
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    while(n>0);
   printf("the reverse of the number is %d\n",rev);
   printf("%d",n);
    if(c==rev)
    { 
        printf("the number is palindrome");
    }
    else
    {
        printf("the number is not palindrome");
    }
    return 0;
}