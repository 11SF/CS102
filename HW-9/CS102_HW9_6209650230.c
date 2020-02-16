#include<stdio.h>
#define MAXSIZE 9
#define MAXNAME 30
struct Input{
    int size;
    int table[MAXSIZE][MAXSIZE];
    char filename[MAXNAME];
}; typedef struct Input Square;
Square data;

void readInput(FILE* myInput)
{
    fscanf(myInput,"%d",&data.size);
    int i,j;
    for(i=0;i<data.size;i++)
        for(j=0;j<data.size;j++)
            fscanf(myInput,"%d",&data.table[i][j]);
}
int isMagic()
{
    int ans,i,j;
    
}
int main()
{
    int i,j;
    FILE* myInput;
    scanf("%s",data.filename);
    myInput = fopen(data.filename,"r");
    if(myInput == NULL)
        {
            printf("Canot open the input file!!\n");
            return -1;
        }
    readInput(myInput);
    isMagic():    
    fclose(myInput);
    return 0;

}