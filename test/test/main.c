//6209650370 Supawit itthisiriwet
#include <stdio.h>
int a,i,j;
float vec[8],sum,sortV;
void scan ()
    {
        printf ("Enter 7 numbers into vector :");
        for (i=1;i<=7;i++)
            {
                scanf ("%f",&vec[i]);
            }
}
void findSum () { for (i=1;i<=7;i++)
                    {
                      sum=vec[i]+sum;
                    }
                    printf ("\n@@@@@Total numbers is %.2f\n",sum);
                     
}
void findMin ()
    {
        float minv = vec[1];
        for (i=1;i<=7;i++)
                 {
                     if (minv > vec[i])
                         minv = vec[i];
                 }
                    printf("\n@@@@@The minimum number in the vector is : %.2lf\n", minv);
                    
    }
void findMax() { float maxv = vec[0];
                for (i=1;i<=7;i++)
                    { if (vec[i]> maxv)
                          maxv = vec[i];
                    }
                    printf("\n@@@@@The maximum number in the vector is : %.2f\n", maxv);
                }
void sortVec () { for (i=1;i<=7;++i)
                    { for (j=i+1;j<=7;++j)
                        {  if (vec[i]>vec[j])
                            {      sortV  = vec[i];
                            vec[i] = vec[j];
                            vec[j] = sortV;
                            }
                    
                        }
                    }
                   printf("\nThe sorted vector is \n");
                   for (i = 1; i <=7; i++)
                   printf("%.2f\t", vec[i]);
                }
int main () {
    scan ();
        
do {

 printf ("\n######################### Menu #########################\n\n");
                printf ("1. Find the maximum number in the vector \n");
                printf ("2. Find the minimum number in the vector \n");
                printf ("3. Find the total of numbers in the vector \n");
                printf ("4. Sort numbers in the vector in the ascending order\n");
                printf ("0. Quit Program \n");
                printf ("Enter your choice <0,1,2,3,4>: ");
                scanf ("%d",&a);
        
        while (a<0||a>4)    { printf ("Invalid input! Please re-enter: ");
                              printf ("Enter your choice <0,1,2,3,4>: ");
                              scanf ("%d",&a);
                            }
            switch (a)
    {    case 1 : findMax ();  break;
        case 2 : findMin ();  break;
        case 3 : findSum ();  break;
        case 4 : sortVec ();  break;
        case 0 : printf ("Bye !"); break;
       
        
    }
        } while (a!=0);
        
    return 0;
}
