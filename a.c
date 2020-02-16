#include<stdio.h>
int ticketnum;
int digit;
int prediction_no;
int main()
{
    printf("Please enter ticket number <xxxxx>: ");
    scanf("%d",&ticketnum);
    while(ticketnum!=0)
    {
        digit=ticketnum%10;
        ticketnum=(ticketnum*0.1)-(digit*0.1);
        prediction_no=prediction_no+digit;
    }
    while(prediction_no>=10)
    {
        digit=prediction_no%10;
        prediction_no=(prediction_no*0.1)-(digit*0.1);
        prediction_no=prediction_no+digit;
    }
    printf("%d\n",prediction_no);
    return 0;
}
