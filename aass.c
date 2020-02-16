#include<stdio.h>
int input()
{
char choice;
scanf("%c",&choice);
if(choice=='1')
    return 1;
else if(choice=='2')
    return 2;
else if(choice=='3')
    return 3;
else if(choice=='4')
    return 4;
else if(choice=='0')
    return 0;
else
    {
        printf("Invalid Choice!!\n");
        input(); 
    }
}

int main()
{
printf("Enter choice: ");
switch(input())
        {
            case 1:
                printf("1\n");
                
                break;
            case 2:
                printf("2\n");
                
                break;
            case 3:
                printf("3\n");
                
                break;
            case 4:
                printf("4\n");
                break;
        }
        return 0;
}
