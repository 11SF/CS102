#include<stdio.h>
int main()
{
    int size,num,i;
    printf("Please enter size: ");
    scanf("%d",&size);
    int a[size];
    num=size;
    if(size%2!=0)
    {
        int x=2;
        for(i=1;i<=size;i++)
        {
            if(num>=1)
            {
                a[i-1]=num;
                num-=2;
            }
            else
            {
                a[i-1]=a[i-1-x];
                x+=2;
            }
            
        }
    }
    else
    {
        int x=1;
        for(i=1;i<=size;i++)
        {
            if(num>=1)
            {
                a[i-1]=num;
                num-=2;
            }
            else
            {
                a[i-1]=a[i-1-x];
                x+=2;
            }
        }
    }
    int row,col,space;
    for(i=0;i<size;i++)
    printf("%d\n",a[i]);
    for(row=0;row<size;row++)
    {
        for(space=0;space<=size-a[row];space++)
        {
            printf(" ");
        }
        for(col=1;col<=a[row];col++)
            {
                    printf("*");
            }
            printf("\n");
    }
    return 0;
}