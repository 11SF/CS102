#include<stdio.h>
int cnt=1;
int main()
{
    while(cnt<=3)
    {
        printf("Hello\n");
        cnt++;
    }
    printf("************\n");
    for(cnt=1;cnt<=3;cnt++)
        printf("Hello\n");
    printf("************\n");
    cnt=1;
    do
    {
        printf("Hello\n");
        cnt++;
    }
    while(cnt <=3);

return 0;
}