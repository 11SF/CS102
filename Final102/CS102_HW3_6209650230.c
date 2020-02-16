//Student ID:6209650230
#include<stdio.h>
int integer,c_integer=3,remain=1;
int main()
{
    printf("Please enter an integer between 3-50000: ");
    scanf("%d",&integer);
    
    while (integer<3||integer>50000)
    {
        printf("Invalid Input!!\n");
        printf("Please enter an integer between 3-50000: \n");
        scanf("%d",&integer);
    }
    while(c_integer<integer&&remain>0)
    {
        remain=integer%c_integer++;
    }
    if(remain==0){
            printf("%d is not a prime number.\n",integer);
//            printf("%d\n",--c_integer);
    }
    else
            printf("%d is a prime number.\n",integer);
    return 0;
}
