// Write a program to print multiplication table of a given number n.
// Ans :

// #include <stdio.h>
// int main()
// {
//     int i=0,num;
//     printf("\n Enter the number whose table you want :");
//     scanf("%d",&num);
//     for(i=0;i<10;++i)
//         {
//             printf("\n %d\t * \t%d\t = \t%d\t  ",num,i+1,num*(i+1));
//         }
//     return 0;
// }

// Write a program to print multiplication table of 10 in reversed order.
// Ans 

// #include <stdio.h>
// int main()
// {
//     int num=10,i;
//     for(i=10;i>0;--i)
//         {
//             printf("\n %-4d * %4d = %4d ",num,i,num*i);
//         }
//     return 0;
// }

// 3. A do while loop is executed:
// a. At least once.
// b. At least twice.
// c. At most once.
// Ans :

// -> a. At least once.

// 4. What can be done using one type of loop can also be done using the other two
// types of loops – true or false?
// Ans :

// -> True 

// 5. Write a program to sum first ten natural numbers using while loop.
// Ans:

// #include <stdio.h>
// int main()
// {
//     int i=1,sum=0;
//     while(i<=10)
//          {
//             sum = sum + i;
//             ++i;
//          }
//     printf("\n The sum of first ten natural number is : %d",sum);
//     return 0;
// }

// 6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
// Ans : 
//for loop 
// #include <stdio.h>
// int main()
// {
//     int i,sum=0;
//     for(i=1;i<6;++i)
//          {
//             sum = sum + i;
//          }
//     printf("\n The sum of first ten natural number is : %d",sum);
//     return 0;
// }

// do while 
// #include <stdio.h>
// int main()
// {
//     int i=1,sum=0;
//       do{
//             sum = sum + i;
//             ++i;
//          }while(i<6);
//     printf("\n The sum of first ten natural number is : %d",sum);
//     return 0;
// }

// 7. Write a program to calculate the sum of the numbers occurring in the
// multiplication table of 8. (consider 8 x 1 to 8 x 10).
// Ans :


// #include <stdio.h>
// int main()
// {
//     int i,num=8,sum=0;
//     for(i=1;i<11;++i)
//         {
//             sum = sum + (num * i );
//         }
//     printf("\n Sum of 8 table : %d ",sum);
//     return 0;
// }

// 8. Write a program to calculate the factorial of a given number using a for loop.
// Ans : 

// #include <stdio.h>
// int main()
// {
//     int num,i,mul=1;
//     printf("\n Enter the number whoes factorial you want :");
//     scanf("%d",&num);
//     for(i=num;i>0;--i)
//         {
//             mul = mul * i;
//         }
//     printf("\n factorial %d is %d ",num,mul);
//     return 0;
// }

// 9. Repeat 8 using while loop.
// Ans : 

// #include <stdio.h>
// int main()
// {
//     int num,i,mul=1;
//     printf("\n Enter the number whoes factorial you want :");
//     scanf("%d",&num);
//     i= num ;
//      do{
//             mul = mul * i;
//             --i;
//         }while(i>0);
//     printf("\n factorial %d is %d ",num,mul);
//     return 0;
// }

// 10. Write a program to check whether a given number is prime or not using loops.
// Ans : 

// #include <stdio.h>
// int main()
// {
//     int num,i,flag=0;
//     printf("\n Enter the number you want to check :");
//     scanf("%d",&num);
//     if(num == 0 || num == 1 )
//         {
//             printf("\n The number %d is not a prime number ",num);
//             ++ flag ;
//         }
//     for(i=2;i<num;++i)
//         {
//             if(num%i==0)
//                 {
//                     printf("\n The number %d is not prime ",num);
//                     ++flag ;
//                     break;
//                 }
//         }
//     if ( flag == 0 )
//         {
//             printf("\n The number %d is prime number ",num);
//         }
//     return 0;
// }

// 11. Implement 10 using other types of loops.
// Ans :

// -> while loop 
// #include <stdio.h>
// int main()
// {
//     int num,i=2,flag=0;
//     printf("\n Enter the number you want to check :");
//     scanf("%d",&num);
//     if(num == 0 || num == 1 )
//         {
//             printf("\n The number %d is not a prime number ",num);
//             ++ flag ;
//         }
//     while(i<num)
//         {
//             if(num%i==0)
//                 {
//                     printf("\n The number %d is not prime ",num);
//                     ++flag ;
//                     break;
//                 }
//             ++i;
//         }
//     if ( flag == 0 )
//         {
//             printf("\n The number %d is prime number ",num);
//         }
//     return 0;
// }
