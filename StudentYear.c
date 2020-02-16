//Student ID 6209650230
#include<stdio.h>
int class;
int main()
{
    printf("Please enter your student year <1-7>\n");
    scanf("%d",&class);
    while(class<1||class>7)
    {
        printf("Invalid Input!!! Please re-enter\n");
        printf("Please enter your student year <1-7>\n");
        scanf("%d",&class);
    }
    
   
        if(class==1)
            printf("Hi, Freshman!\n");
        else if(class==2)
            printf("You are a shopomore.\n");
        else if(class==3)
            printf("Hi, Junior.\n");
        else 
            printf("Hello, Senior!!\n");
    
return 0;
}