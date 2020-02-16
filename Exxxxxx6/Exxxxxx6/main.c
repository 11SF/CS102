#include<stdio.h>
#include<math.h>
int singers;
int i,j,a,S=0;
//double avgsg;
int main()
{
    printf("How many singers? ");
    scanf("%d",&singers);
    while(singers<3||singers>50)
    {
        printf("Invalid input, Please try again\n");
        printf("How many singers? ");
        scanf("%d",&singers);
    }
    int data[singers][singers-1];
    for(i=0;i<singers;i++)
    {
        printf("Enter scores for Singer #%d : ",i+1);
        for(j=0;j<singers-1;j++)
        {
            scanf("%d",&data[i][j]);
        }
        for(j=0;j<singers-1;j++)
        while(data[i][j]>5)
        {
            printf("Score [0-5], Please try again\n");
            printf("Enter scores for Singer #%d : ",i+1);
            for(a=0;a<singers-1;a++)
            {
                scanf("%d",&data[i][a]);
            }
        }
    }

    double Results[singers][5];  //0 = Xbar // 1 = (Xi-Xb)^2 // 2 = STD // 3 = คะแนนรวม // 4 = 0,1
    
    for(i=0; i<singers; i++)
        for(j=0; j<singers-1; j++)
        {
            Results[singers][3]+=data[i][j];
        }
// หาค่า STD

    for(i=0;i<singers;i++)
        Results[i][0]=(double)Results[singers][3]/(singers-1);
    
    for(i=0;i<singers;i++)
        for(j=0;j<singers-1;j++)
        {
            Results[i][1]+=pow(data[i][j]-Results[i][0],2);
        }
    
    for(i=0;i<singers;i++)
       Results[i][2]=sqrt((1.0/(singers-1))*Results[i][1]);
    
//
    for(i=0;i<singers;i++)
        if()
    
  /*  switch(c)
    {
        case 1 :
            printf("The winner is Singer#%d !!\n",winners[0]);
            printf("The score is %d and STD is %.2f",max,STD[winners[0]][2]);
            break;
        default:
            printf("The winners are Singer#%d & Singer #%d!!\n",winner+1,co_winner+1);
            printf("The score is %d and STD is ...........",max);
    }
*/
        
    for(i=0;i<c;i++)
    {
       // printf("#%d STD= %.2f\n Xbar= %.2f XiXb= %.2f \n",i+1,STD[i][2],STD[i][0],STD[i][1]);
        printf("%d ",winners[i]+1);
    }
    
    return 0;
}
