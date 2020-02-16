#include<stdio.h>
int main()
{
    int size,num,i;
    printf("Enter the number of rows for the bottle [3-20]: ");
    scanf("%d",&size);
    while(size<3||size>20)
    {
        printf("Invalid input, please re-enter.\n");
        printf("Enter the number of rows for the bottle [3-20]: ");
        scanf("%d",&size);
    }
    printf("Your bottle looks like this:\n");
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
    int row,col,space;
    for(row=0;row<size;row++)
    {
        for(space=0;space<(size-a[row])/2;space++)
            printf(" ");
        for(col=1;col<=a[row];col++)
            printf("*");
            
        printf("\n");
    }
    return 0;
}
