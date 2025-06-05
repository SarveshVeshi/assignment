// 1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
// to the third element where ptr is a pointer pointing to the first element of the
// array.
// ans :

// #include <stdio.h>
// int main()
// {
//     int a[10]={10,20,30,40,50,60,70,80,90,100},*ptr;
//     printf("\n The number at the first element is %d",a[0]);
//     ptr = a;
//     ptr = ptr + 2;
//     printf("\n The number at 3rd position is %d",*ptr);
//     return 0;
// }

// 2. If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
// (i) True.
// (ii) False.
// (iii) Depends.
// Ans : 

//-> (ii) False.

// 3. Write a program to create an array of 10 integers and store multiplication table of
// 5 in it.
// Ans : 

// #include <stdio.h>
// int main()
// {
//     int a[10],i;
//     for(i=0;i<10;++i)
//         {
//             a[i] = 5 * (i+1) ;
//         }
//     for(i=0;i<10;++i)
//         {
//            printf("\n %d ",a[i]);
//         }
//     return 0;
// }

// 4. Repeat problem 3 for a general input provided by the user using scanf.
// Ans 

//  #include <stdio.h>
// int main()
// {
//     int a[10],i,n;
//     printf("enter the table u want : \n");
//     scanf("%d",&n);
//     for(i=0;i<10;++i)
//         {
//             a[i] = n * (i+1) ;
//         }
//     for(i=0;i<10;++i)
//         {
//            printf("\n %d ",a[i]);
//         }
//     return 0;
// }

// 5. Write a program containing a function which reverses the array passed to it.
// Ans: 1 2 3 4 5 6 7 

// #include <stdio.h>
// void reverse(int [],int );
// void reverse(int a[],int n)
// {
//     int i;
//     int temp;
//     for(i=0;i<n/2;++i)
//         {
//             temp = a[i];
//             a[i] = a[n-i-1];
//             a[n-i-1] = temp;
//         }
//     for(i=0;i<n;++i)
//         {
//             printf("%d ",a[i]);
//         }
// }
// int main()
// {
//     int a[7]={10,20,30,40,50,60,70};
//     int n=7,i;
//     printf("Before reversing :\n");
//     for(i=0;i<n;++i)
//         {
//             printf("%d ",a[i]);
//         }
//     printf("\nAfter reversing\n");    
//     reverse(a,n);
//     return 0;
// }

// 6. Write a program containing functions which counts the number of positive
// integers in an array.
// ans:

// #include <stdio.h>
// int positive(int [],int);
// int positive (int a[],int n)
// {
//     int i,count=0;
//     for ( i = 0; i < n; i++)
//     {
//         if (a[i]>0)
//             {
//                 ++count;
//             }
//     }
//     return (count);
// }
// int main()
// {
//     int a[10] = {10,-20,30,40,-50,60,70,80,-90,100},i,n=10;
//     printf("The array :\n");
//     for ( i = 0; i < 10; i++)
//     {
//         printf("%d \n",a[i]);
//     }
//     printf("The number of positive integers are : %d \n",positive(a,n));
//     return 0;
// }

// 7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
// and 9 respectively.
// Ans :
//2 7 9 

// #include <stdio.h>
// int main()
// {
//     int a[3][10],i,j;
//     int b[3]={2,7,9};
//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 10; j++)
//         {
//             a[i][j]= b[i] * (j+1);
//         }  
//     }
//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 10; j++)
//         {
//            printf("%d * %d = %d\n",b[i],j+1,a[i][j]);
//         }  
//         printf("\n");
//     } 
//     return 0;
// }

// 8. Repeat problem 7 for a custom input given by the user.
// Ans : 

// #include <stdio.h>
// int main()
// {
//     int a[3][10],i,j;
//     int b[3];
//     printf("Enter the three numbers whoes table u want :\n");
//     for ( i = 0; i < 3; i++)
//     {       
//         scanf("%d", &b[i]);
//     }
//     printf("\n");
//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 10; j++)
//         {
//             a[i][j]= b[i] * (j+1);
//         }  
//     }
//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 10; j++)
//         {
//            printf("%d * %d = %d\n",b[i],j+1,a[i][j]);
//         }  
//         printf("\n");
//     } 
//     return 0;
// }

// 9. Create a three–dimensional array and print the address of its elements in
// increasing order.
// Ans : 

// #include <stdio.h>
// int main()
// {
//     int a[2][3][5];
//     int i,j,k;
//     for ( i = 0; i < 2; i++)
//     {
//         for ( j = 0; j < 3; j++)
//         {
//             for ( k = 0; k < 5; k++)
//             {
//                 printf("%u\t",&a[i][j][k]);
//             }
//             printf("\n");
//         }
//        printf("\n"); 
//     }
    
//     return 0;
// }