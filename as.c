#include<stdio.h>

int arrsize = 7;
void menu()
{
    printf("################## MENU ##################\n");
    printf("1. Find the maximum number in the vector\n");
    printf("2. Find the minimum number in the vector\n");
    printf("3. Find the total of numbers in the vector\n");
    printf("4. Sort numbers in thevector in the ascending order\n");
    printf("0. Quit Program\n");
}
void line()
{
    printf("------------------------------------------------\n");
}

float findMax(float arr[],int size)
{
    float max=arr[0];
    int i;
    for(i=0;i<size;i++)
        if(arr[i]>max)
            max=arr[i];
    return max;
}
float findMin(float arr[],int size)
{
    float min=arr[0];
    int i;
    for(i=0;i<size;i++)
        if(arr[i]<min)
            min=arr[i];
    return min;
}
float findSum(float arr[],int size)
{
    float sum=0;
    int i;
    for(i=0;i<size;i++)
        sum+=arr[i];
    return sum;
}
void sortVector(float arr[],int size)
{
    int i,round,num;
    
    for(round=0;round<size;round++)
        for(i=0;i<size-1;i++)
            if(arr[i]>arr[i+1])
            {
                num=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=num;
            }
}
int main()
{
	int i;
    char choice;
    float vector[arrsize];
    printf("Enter %d numbers into the vector: ",arrsize);
    for(i=0;i<arrsize;i++) {
    	scanf("%f",&vector[i]);
    	system("cls");
	}
    do{
    menu();
    printf("Enter your choice <1, 2, 3, 4 or 0>: ");
    scanf(" %c",&choice);
        if(choice!='1'&&choice!='2'&&choice!='3'&&choice!='4')
        {
        	printf("INVALID CHOOSE\n");
           	continue;
        }
    line();
    switch(choice)
        {
            case '1':
                printf("The maximum number in the vector is %.2lf\n",findMax(vector,arrsize));
                line();
                break;
            case '2':
                printf("The munimum number in the vector is %.2lf\n",findMin(vector,arrsize));
                line();
                break;
            case '3':
                printf("The total of numbers in the vector is %.2lf\n",findSum(vector,arrsize));
                line();
                break;
            case '4':
                printf("The sorted vector is ");
                sortVector(vector,arrsize);
                for(i=0;i<arrsize;i++)
                    printf("%.2lf ",vector[i]);
                printf("\n");
                line();
                break;
        }
    }
    while(choice!='0');
    {
        printf("Bye bye....\n");
    }
    line();
    return 0;
}


