#include<stdio.h>
int main()
{
    int numberr,count=0;
    printf("enter number:\n");
    scanf("%d",&numberr);
    while(numberr>0)
    {
        numberr=numberr/10;
        count++;

    }
    printf(" %d",count++);
    return 0;
}