#include<stdio.h>
#include<string.h>
#define MAXLEN 50
struct StudentRec
{
    char lastname[MAXLEN]
    float mark;
} 
typedet struct StudentRec Student;

int main()
{
    Student studs[10];
    studs[0].mark = 90;
    strcpy(studs[0].lastname,"Sitaruno");
    printf("%s",studs[0].lastname);
    return 0;
}