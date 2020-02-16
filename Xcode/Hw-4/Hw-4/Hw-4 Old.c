//Student ID:6209650230
#include<stdio.h>
int num,a_n,a,b_n,b,c_n,c,d_n,d,e_n,e;
int ans1,ans2,ans3,ans;
int main()
{
    printf("Please enter your ticket number <xxxxx>: ");
    scanf("%d",&num);
    
    a_n=num%10;
        a=(num*0.1)-(a_n*0.1);
    
    b_n=a%10;
        b=(a*0.1)-(b_n*0.1);
    
    c_n=b%10;
        c=(b*0.1)-(c_n*0.1);
    
    d_n=c%10;
        d=(c*0.1)-(d_n*0.1);
    
    e_n=d%10;
        e=(d*0.1)-(e_n*0.1);
    
    ans1=a_n+b_n+c_n+d_n+e_n;
    if(ans1<10)
            ans=ans1;
    if(ans1>=10)
        {
            ans2=(ans1%10)+(ans1/10);
            ans=ans2;
        }
    if(ans2>=10)
        {
            ans3=(ans2%10)+(ans2/10);
            ans=ans3;
        }
    
    printf("Your number is: %d \n",ans);
    printf("Your prediction is: ");
    switch(ans)
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
