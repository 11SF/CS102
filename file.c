#include<stdio.h>
int main()
{
FILE* ofi;
    ofi = fopen("myOutput.txt","a");
    if(ofi == NULL)
    {
        printf("Cannot open the output file!!\n");
        return -1;
    }
    fprintf(ofi,"Hello\n");
    fprintf(ofi,"Thammasat Rangsit Campus\n");
    
    fclose(ofi);
    return 0;
}