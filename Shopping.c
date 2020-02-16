#include<stdio.h>
int object[4]={100,250,50,400};
int main()
{
    char ID[30];
    char PASS[30];
    int i;
    printf("Enter your ID : ");
    scanf("%s",ID);
    printf("Enter your Password : ");
    scanf("%s",PASS);
    for(i=0;ID[i]!='\0';i++);
    switch(i)
    {
        case 0: printf("Login fail Please try again.");
            break;
        case 1: printf("shot ID Please try again.");
            break;
        default :
            printf("Success login");

    }
    printf("\n");
}