// 1. Write a program to print the address of a variable. Use this address to get the
// value of the variable.
// Ans:

// #include <stdio.h>
// int main()
// {
//     int n=10;
//     printf("\n The address of the variable is : %u",&n);
//     printf("\n The value at address is : %d",*(&n));
//     return 0;
// }

// 2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
// a function and print its address. Are these addresses same? Why?
// Ans :

// if we pass by value then it is not same but if we pass by reference like here then it is same
// #include <stdio.h>
// void pass(int *);
// void pass(int*a)
// {
//     printf("\n The address of the variable using function is %p or %u",a,a);
// }
// int main()
// {
//     int i = 7;
//     printf("\n The address of variable i is %p or %u ",&i,&i);
//     pass(&i);
//     return 0;
// }

// 3. Write a program to change the value of a variable to ten times of its current
// value.
// Ans :

// #include <stdio.h>
// void change(int*);
// void  change(int *a)
// {
//     *a = *a * 10;
//     return;
// }
// int main()
// {
//     int a ;
//     printf("\n Enter the values of a :");
//     scanf("%d",&a);
//     printf("\n Before change %d",a);
//     change(&a);
//     printf("\n After change %d",a);
//     return 0;
// }

// 4. Write a function and pass the value by reference.
// Ans:

// #include <stdio.h>
// void swap(int*,int*);
// void swap(int*a,int*b)
// {
//     int temp ;
//     temp = *a;
//     *a = *b ;
//     *b = temp;
//     return ;
// }
// int main()
// {
//     int a,b;
//     a= 10;
//     b=7;
//     printf("\n Before swap a = %d,b= %d ",a,b);
//     swap(&a,&b);
//     printf("\n After swap a = %d,b = %d",a,b);
//     return 0;
// }

// 5. Write a program using a function which calculates the sum and average of two
// numbers. Use pointers and print the values of sum and average in main().
// Ans:

// #include <stdio.h>

// int* sum(int a, int b){
//     int s = a+b;
//     int* ptr = &s;
//     printf("The sum is %d\n", s);
//     return ptr;
// }

// float* average(int a, int b){
//     float avg =  (a+b)/2.0;
//     float * ptr = &avg;
//     printf("The average is %f\n", avg);
//     return ptr;
// }

// int main(){
//     int x = 4; 
//     int y = 6;
//     int* ptr1;
//     float* ptr2;
//     ptr1 = sum(x,y);
//     ptr2 = average(x,y);
//     printf("The address of sum is %u and of average is %u", ptr1, ptr2 );
//     return 0;
// }

// 6. Write a program to print the value of a variable i by using “pointer to pointer” type
// of variable.
// ans : 

// #include <stdio.h>
// int main()
// {
//     int i=7;
//     int *ptr;
//     int **ptr1;
//     ptr = &i;
//     ptr1 = &ptr;
//     printf("\n value of i is %d",**ptr1);
//     return 0;
// }

// 7. Try problem 3 using call by value and verify that it does not change the value of
// the said variable.
// Ans : 

// #include <stdio.h>
// int  change(int a);
// int change(int a)
// {
//     a = a * 10;
//     return(a);
// }
// int main()
// {
//     int a ;
//     printf("\n Enter the values of a :");
//     scanf("%d",&a);
//     printf("\n Before change %d",a);
//     a = change(a);
//     printf("\n After change %d",a);
//     return 0;
// }