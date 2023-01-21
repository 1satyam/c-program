#include<stdio.h>

int main()
{
    int num,q,count=0,cnt ,result=0,rem,mul=1;
    printf("Enter the number :");
    scanf("%d",&num);
    q=num; 
    while(q!=0)
    {
        q=q/10;
        count++;
    }
    cnt=count;
    q=num;
    while(q!=0)
    {
        rem=q%10;
       while(cnt!=0)
       {
        mul=mul*rem;
        cnt--;
       }
       result=result+mul;
       q=q/10;
       mul=1;
       cnt=count;
    }
    if(result==num)
    {
        printf("%d is the armstrong number",num);
    }
    else
    {
        printf("%d is not a armstrong number",num);
    }
    return 0;
}