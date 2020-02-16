#include<stdio.h>
int row,col,size;
int i,j,k,l,a,b,c;
int even[9]={4,6,8,10,12,14,16,18,20};
int main()
{
    printf("Enter the number of rows for the bottle [3-20]: ");
    scanf("%d",&size);
    col=size;
    while(size<3||size>20)
    {
        printf("Invalid input, please re-enter.");
        printf("Enter the number of rows for the bottle [3-20]: ");
        scanf("%d",&size);
    }
    printf("Your bottle looks like this: \n");
    if(size%2!=0)
    {
        b=size;
        a=(size/2);
        for(k=0;k<=a;k++)
        {
            for(j=0;j<k;j++)
                printf(" ");
            for(i=1;i<=b;i++)
                printf("*");
            for(l=0;l<k;l++)
            printf(" ");
            printf("%d",b);
            printf("\n");
            b=b-(j+l);
        }
    }
        
        
    return 0;
}