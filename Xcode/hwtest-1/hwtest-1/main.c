#include<stdio.h>
int integer,sum;
int main()
{
    printf("Please enter your integer: ");
    scanf("%d",&integer);
    while(integer!=0)
    {
        sum=sum+integer--;
    }
    printf("Sum : %d\n",sum);
    return 0;
}
