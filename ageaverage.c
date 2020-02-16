#include<stdio.h>
const int numStud = 3;
int age,totleage=0,cnt;
double average;
int main()
{
for(cnt=1;cnt<=numStud;cnt++)
{
    printf("Enter age of student #%d: ",cnt);
    scanf("%d",&age);
    totleage=totleage+age;
}

average=totleage*1.0/numStud;
printf("The average age of the students is %.2lf \n",average);
return 0;
}