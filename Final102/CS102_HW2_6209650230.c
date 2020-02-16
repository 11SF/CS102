//Student ID:6209650230
#include<stdio.h>
int a,b,c;
int main()
{
    printf("Enter 3 intergers: ");
    scanf("%d%d%d",&a,&b,&c);
        if(a<=b&&b<=c)
            printf("Sorted Output: %d <= %d <= %d\n",a,b,c);
        else if(a<=c&&c<=b)
            printf("Sorted Output: %d <= %d <= %d\n",a,c,b);
        else if(b<=a&&a<=c)
            printf("Sorted Output: %d <= %d <= %d\n",b,a,c);
        else if(b<=c&&c<=a)
            printf("Sorted Output: %d <= %d <= %d\n",b,c,a);
        else if(c<=b&&b<=a)
            printf("Sorted Output: %d <= %d <= %d\n",c,b,a);
        else
            printf("Sorted Output: %d <= %d <= %d\n",c,a,b);
    return 0;
}