//insertion sort using an array of element .
#include <stdio.h>
#include <conio.h>
void insertion_sort(int *A,int n)
{
    int i,key,j;
   for(i=1;i<=n-1;i++)
       {
        key = A[i];
         j = i - 1;
         while(A[j]>key)
               {
                A[j+1]= A[j];
                --j;
               }
        A[j+1] = key;    
       }
}
int main ()
{
   int Array[50],n,i;
   printf("\n Enter the number of elements you want to enter :");
   scanf("%d",&n);
   printf("\n Ente the array of elements :");
   for(i=0;i<=n-1;i++)
      {
        scanf("%d",&Array[i]);
      }
    insertion_sort(Array,n);
    printf("\n Sorted array:");
    for(i=0;i<=n-1;i++)
      {
        printf(" %d ",Array[i]);
      }
    return 0;
}