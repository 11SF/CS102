#include<stdio.h>
int Factorial(int n)
{
    if(n==o)
        return 1
    else
        return (n* Factorial(n-1));
}
int main()
{
    int x;
    printf("Enter a positive integer: ");
    scanf("%d",&x);
    
    printf("%d!is%d\n",x,Factorial(x));
    return 0;
}
