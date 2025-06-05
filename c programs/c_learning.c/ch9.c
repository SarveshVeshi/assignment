// 1. Create a two-dimensional vector using structures in C.
// #include <stdio.h>
// struct vector 
// {
//     int i;
//     int j;
// };
// int main()
// {
//     struct vector v1,v2;
//     printf("\nEnter the values for the first vector i and j:");
//     scanf("%d%d", &v1.i,&v1.j);
//     printf("\nEnter the values for the second vector i and j:");
//     scanf("%d%d", &v2.i,&v2.j);
//     printf("\n The values are for vector one and two : ");
//     printf("%d %d \t%d %d ",v1.i,v1.j,v2.i,v2.j);
//     return 0;
// }

// // 2. Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
// // The vectors must be two–dimensional.

// #include <stdio.h>
// typedef struct vector
// {
//     int i;
//     int j;
// }vector;
// vector sumVector (vector v1,vector v2)
// {
//     vector v3;
//     v3.i = v1.i + v2.i;
//     v3.j = v1.j + v2.j;
//     return v3;
// }
// int main()
// {
//     vector v1,v2,v3;
//     printf("Enter the value of vector 1 and 2 (i and j for both vectors : \n");
//     scanf("%d%d%d%d", &v1.i,&v1.j,&v2.i,&v2.j);
//     printf("\n The sum of the two vectors is :\n ");
//     v3 = sumVector(v1,v2);
//     printf("%d %d  \n",v3.i,v3.j);
//     return 0;
// }

// 3. Twenty integers are to be stored in memory. What will you prefer- Array or
// structure?
