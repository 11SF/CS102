#include<stdio.h>
#include<string.h>
#include<ctype.h>
void formatText(char text[])
{
    text[0]=toupper(text[0]);
    int i=1;
    while(text[i]!='\0')
          {
              text[i]=tolower(text[i]);
              i++;
          }
}
int main()
{
    char name[20], surname[30], fullname[55];
    printf("What is your name\n");
    scanf("%s",name);
    printf("What is your surname\n");
    scanf("%s",surname);
    formatText(name);
    formatText(surname);
    strcpy(fullname,name);
    strcat(fullname," ");
    strcat(fullname,surname);
    printf("Hello,Khun %s. How are you? \n",fullname);
    return 0;
    
}
