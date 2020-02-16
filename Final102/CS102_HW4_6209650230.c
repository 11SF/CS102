#include<stdio.h>
int ticketnum,digit,prediction_no;
int main()
{
    printf("Please enter ticket number <xxxxx>: ");
    scanf("%d",&ticketnum);
    while(ticketnum!=0)
    {
        digit=ticketnum%10;
        prediction_no=prediction_no+digit;
        ticketnum=(ticketnum*0.1)-(digit*0.1);
    }
    while(prediction_no>=10)
    {
        digit=prediction_no%10;
        prediction_no=(prediction_no/10)+digit;
    }
    printf("Your number is: %d \n",prediction_no);
    printf("Your prediction is: ");
    switch(prediction_no)
    {
        case 0 :printf("Bad lucky\n");
            break;
        case 1 :printf("Good luck :)\n");
            break;
        case 2 :printf("Will meet your soul-mate soon ^_^\n");
            break;
        case 3 :printf("Should make merit\n");
            break;
        case 4 :printf("Lucky in love\n");
            break;
        case 5 :printf("Need more rest\n");
            break;
        case 6 :printf("Beware of an accident @_@\n");
            break;
        case 7 :printf("Lucky in game\n");
            break;
        case 8 :printf("Looking good\n");
            break;
        case 9 :printf("Will get some money soon\n");
            break;
    }
    return 0;
}
