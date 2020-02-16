#include<stdio.h>
int singers;
int i,j;
int main()
{
    printf("How many singers? ");
    scanf("%d",&singers);
    int scor[singers];
    
    for(i=1;i<=singers;i++)
    {
        printf("Enter score for singer#%d : ",i);
        for(j=1;j<singers;j++)
        {
            scanf("%d",scor[j-1]);
        }
    }
   
    
    
}
