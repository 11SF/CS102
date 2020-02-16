#include<stdio.h>
int integer,c_integer=4,c2_integer=4;
int main()
{
    printf("Please enter an integer between 3-50000: ");
    scanf("%d",&integer);
        while(integer<3||integer>50000)
        {
            printf("Invalid Input!!\n");
            printf("Please enter an integer between 3-50000: ");
            scanf("%d",&integer);
        }
        while(c_integer<integer)
            {
            if(integer%c_integer==0)
                {
                    printf("%d is not a prime number.\n",integer);
                    c2_integer=c_integer;
                }
                c_integer=c_integer+1;
            }
  
            if(integer%c2_integer>0)
                {
                    printf("%d is a prime number.\n",integer);
                }
    return 0;
}
