#include<stdio.h>
#include <stdlib.h>
void readinput(int arr[9][9],int *sizeSquare,char filename[30])
{
    int i,j;
    FILE * data;
    data = fopen(filename,"r");
        if(data == NULL)
        {
            printf("Cannot open file. Please try again\n");
            exit(-1);
        }
    fscanf(data,"%d",sizeSquare);
    if(*sizeSquare<3||*sizeSquare>9)
    {
        printf("Over size!!\n");
        exit(-1);
    }

    for(i=0;i<*sizeSquare;i++)
        for(j=0;j<*sizeSquare;j++)
            fscanf(data,"%d",&arr[i][j]);
    fclose(data);
}
int isMagic(int size2D,int arr[9][9],int *MagicCons)
{
    int a = 0,i,j,TF = 0;
    int remember;
    int sizeto1D = size2D*size2D;
    int case1 = 0,case2 = 0;
    int arr2[sizeto1D];
    int sumX[size2D];
    int sumY[size2D];
    int sumCS[2];
    for(i=0;i<size2D;i++)
        {
        for(j=0;j<size2D;j++)
            {
            arr2[a++]= arr[i][j];
            }
        }
    for(i=0;i<sizeto1D;i++)
    {
        remember = arr2[i];
        for(j=i+1;j<sizeto1D;j++)
            if(arr2[j]==remember)
                case1 += 1;
    }
    for(i=0;i<size2D;i++)
        {
            sumX[i]=0;
        for(j=0;j<size2D;j++)
            {
            sumX[i]+=arr[i][j];
            }
        }
    for(i=0;i<size2D;i++)
        {
            sumY[i]=0;
        for(j=0;j<size2D;j++)
            {
            sumY[i]+=arr[j][i];
            }
        }
        
    for(i=0;i<2;i++)
    {
        sumCS[i]=0;
    if(i==0)
    {
        for(j=0;j<size2D;j++)
            sumCS[i]+=arr[j][j];
    }
    else
    	for(j=size2D-1;j>=0;j--)
            sumCS[i]+=arr[j][j];
	}
    for(i=1;i<size2D;i++)
    {
        remember = sumCS[0];
        if(sumX[i]!=remember||sumY[i]!=remember||sumCS[0]!=remember||sumCS[1]!=remember)
            case2+=1;
    }
    *MagicCons = sumCS[0];
    if(case1+case2 > 0)
        TF = 1;
    
    return TF;
}
int YN(char *yn)
{
    if(*yn == 'n'|| *yn == 'N')
    {
        return 0;
    }
    else if(*yn == 'y'|| *yn == 'Y')
    {
        return 1;  
    }
    else
    {
        return -1;
    }
    
} 
int main()
{
    int i,ans;
    char yn;
    do{
        char filename[30];
        int sizeSquare;
        int Square[9][9];
        int MagicCons;
    
        printf("Please enter the input file name: ");
        scanf("%s",filename);

        readinput(Square,&sizeSquare,filename);
        ans = isMagic(sizeSquare,Square,&MagicCons);
        if(ans > 0)
        {
            printf("Your square is not a magic square!!\n");
        }
        else
        {
            printf("Congratulations!! Your square is a magic square.\n");
            printf("The magic constant of this square is %d\n",MagicCons);
        }
        printf("Try more <y/n>? ");
        scanf(" %c",&yn);
    }while(YN(&yn)==1);
    
        printf("Bye.\n");
    
    return 0;
}

