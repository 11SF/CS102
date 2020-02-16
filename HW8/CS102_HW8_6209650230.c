#include<stdio.h>
#include<string.h>
#define MAXITEM 12
struct myGoodsRec { 
    int ID;
    char name[20]; 
    char type; 
    float cost; 
    float tax;
    float netPrice; 
};      
typedef struct myGoodsRec Goods;
Goods myGoods [100]; 
float findTax(Goods * newmyGoods)
{
    switch((*newmyGoods).type)
    {
    case 'A': (*newmyGoods).tax=(*newmyGoods).cost*0.10;
        break;
    case 'B': (*newmyGoods).tax=(*newmyGoods).cost*0.15;
        break;
    case 'C': (*newmyGoods).tax=(*newmyGoods).cost*0.20;
        break;
    case 'D': (*newmyGoods).tax=(*newmyGoods).cost*0.40;
        break;
    }
    return (*newmyGoods).tax;

}
int main()
{
    int i,j;
    FILE *myInput;
    FILE *Report;
    myInput = fopen("goods.txt","r");
    if(myInput == NULL)
    {
        printf("Cannot open file try again!!");
        return -1;
    }
    Report = fopen("Report6209650230.txt","w");
    if(Report == NULL)
    {
        printf("Cannot open file try again!!");
        return -1;
    }
    for(i=0;i<MAXITEM;i++)
    {
        fscanf(myInput,"%d %s %c %f",&myGoods[i].ID, myGoods[i].name, &myGoods[i].type, &myGoods[i].cost);
    }
    for(i=0;i<MAXITEM;i++)
    {
        myGoods[i].tax = findTax(&myGoods[i]);
    }
    fprintf(Report,"ID\t\tName\t\t\tType\t\tCost\t\t\tTax\t\t\tNetPrice\n");
    for(i=0;i<MAXITEM;i++)
    {

        fprintf(Report,"%d\t%s",myGoods[i].ID, myGoods[i].name);
        int l = strlen(myGoods[i].name);
        if(l<8)
			fprintf(Report,"\t\t\t");
		else
			fprintf(Report,"   \t");
        fprintf(Report,"%c\t\t%.2f\t\t\t%.2f\t\t\t%.2f", myGoods[i].type, myGoods[i].cost, myGoods[i].tax, myGoods[i].cost + myGoods[i].tax);

        fprintf(Report,"\n");
    }
    fclose(myInput);
    fclose(Report);
    return 0;
}