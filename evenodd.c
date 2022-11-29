#include<stdio.h>

 int main()
 {
    int m,i=0,ne=0,no=0, se=0,so=0;
    while(i<=10)
    {
        printf("enter the number");
        scanf("%d",&m);
        if(m%2==0)
        { 
            se+=m;
            ne+=1;
        }
        else
        {
            so+=m;
            no+=1;
        }
        i++;
    }
    printf("the sum of even is %d\n",se);
    printf("the number of even is %d\n",ne);
    printf("the sum of odd is %d\n",so);
    printf("the number of odd is %d",no);
    return 0;

 }
