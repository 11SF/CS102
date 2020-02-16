//Student ID:6209650230
#include<stdio.h>
float feet,inc,cm;
int main()
{
    printf("How height are you(in feet and inches): ");
    scanf("%f  %f",&feet,&inc);
    cm=((feet*12)+inc)*2.54;
    printf("Your height is %.2f centimeters.\n",cm);
    return 0;
}