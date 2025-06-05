// 1. Write a program using function to find average of three numbers.

// #include<stdio.h>
// float average (float,float,float);
// float average (float x,float y,float z)
// {
//     float A = (x+y+z)/3;
//     return(A);
// }
// int main()
// {
//     float a,b,c;
//     printf("\n Enter the values for the variable a,b,c :");
//     scanf("%f %f %f",&a,&b,&c);
//     printf("\n The average of the given numbers is %f",average(a,b,c));
//     return 0;
// }

// 2. Write a function to convert Celsius temperature into Fahrenheit.
// f = c * 9/5 + 32

// #include <stdio.h>
// #include <math.h>
// float conversion(float);
// float conversion(float c)
// {
//     float f;
//     f = ((c * 9)/5)+ 32 ;
//     return(f);
// }

// int main()
// {
//     float c,f ;
//     printf("\n Enter the temperture in Celsius :");
//     scanf("%f",&c);
//     f = conversion(c);
//     printf("\n The temperature in fahrenheit is %f",ceil(f));   
//     return 0;
// }

// 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2
// f = m g 

// #include <stdio.h>

// float force(float);
// float force(float m)
// {
//     float f = m * 9.8;
//     return f;
// }

// int main(){
//     float m ;
//     printf("\n Enter the mass of the object :");
//     scanf("%f",&m);
//     printf("\n The force acted on the object is %f",force(m));
//     return 0;
// }

// 4. Write a program using recursion to calculate nth element of Fibonacci series.
// what is fibonnaci series : 0 1 1 2 3 5 8 13 
// so the first two numbers are fixed which are 0 and 1 then the rest of the number are the sum of the last two numbers which is n = n-1 + n-2 ;
// lets try to make a recursion !
// fibonacci = n-2 , n-1 ,n

// #include <stdio.h>
// int fibonacci(int );
// int fibonacci (int n)
// {
//     if(n==1||n==2)
//     {
//         return (n-1);
//     }
//     return fibonacci(n-1) + fibonacci(n-2);
// }
// int main()
// {
//     int n;
//     printf("\n Enter the position of fibonnaci series u want the answer of :");
//     scanf("%d",&n);
//     printf("\n The value at the fibonnaci series is : %d",fibonacci(n));
//     return 0;       
// }

// 5. What will the following line produce in a C program:
// int a = 4;
// printf("%d %d %d \n", a, ++a, a++);
// Ans :

// so as the precedence is not set by the user hence the default
// precedence is from right to left hence the out put will be 
// 4 6 6
// or if the precedence is set by the user or it is default by 
// The compiler than the answer is :
//  4 5 5

// 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.

// #include <stdio.h>
// int sum(int);
// int sum(int a)
// {
//     if(a==0)
//     {
//         return 0;
//     }
//     return sum(a-1) + a;
// }
// int main()
// {
//     int num;
//     printf("\n Enter the number till which u want the sum of natural number:");
//     scanf("%d",&num);
//     printf("\n The sum of natural numbers till the given number is :%d",sum(num));
//     return 0;
// }

// 7. Write a program using function to print the following pattern (first n lines)
// *                        1,3,5
// * * *                    
// * * * * *

// #include <stdio.h>

// int main()
// {
//     int i,j;
//     for (i=0;i<3;++i)
//         {
//             for(j=0;j<2*i+1;++j)
//                 {
//                     printf("*");
//                 }
//             printf("\n");
//         }
//     return 0;
// }