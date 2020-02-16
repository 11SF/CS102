#include<stdio.h>
int age,sum,cnt=0;
float avg;
int main()
{
    do
    {
        cnt++;
        printf("Enter age of student #%d <end with 0>: ",cnt);
        scanf("%d",&age);
        sum=sum+age;
    }
    while(age!=0);
    avg=sum*1.0/(cnt-1);
    printf("The average age of the students is %.2f\n",avg);
return 0;
}