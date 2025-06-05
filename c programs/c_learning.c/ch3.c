// 1.What will be the output of this program
// int a = 10;
// if (a = 11)
// printf("I am 11");
// else
// printf("I am not 11");
// Ans :

// -> I am 11 

// 2.Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.
// Ans :

// #include <stdio.h>
// int main()
// {
//     float marks1, marks2, marks3,total  ;
//     printf("\n Enter the percentage of your subject 1 , subject 2 and subject 3 :");
//     scanf("%f%f%f",&marks1,&marks2,&marks3);
//     total = (marks1 + marks2 + marks3)/3 ;
//     if(total>=40&&(marks1>=33||marks2>=33||marks3>=33))
//       {
//         printf("\n Congratulations you are passed !");
//       }
//     else 
//       {
//         printf("\n you are failed  Better luck next time \n remember hardwork beats talent !");
//       }
//     return 0;
// }

// 3.Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
// Income Slab Tax
// 2.5 – 5.0L 5%
// 5.0L - 10.0L 20%
// Above 10.0L 30%
// Ans :

// #include <stdio.h>
// int main()
// {
//     float income,tax;
//     printf("\n Enter your income : ");
//     scanf("%f",&income);
//     if(income<=250000)
//       {
//         tax = 0;
//         printf("\n your income tax is : %f",tax);
//       }
//     else if(income>250000 && income<=500000) 
//       {
//         tax = income * 5 /100 ;
//         printf("\n your income tax is : %f",tax);
//       }
//     else if(income>500000 && income<=1000000)
//       {
//         income  = income - 500000 ;
//         tax = income * 20 /100 + 25000 ;
//         printf("\n your income tax is : %f",tax);
//       }
//     else if(income>1000000 )
//       {
//         income = income - 1000000 ;
//         tax = income * 30 / 100 + 125000 ;
//         printf("\n your income tax is : %f",tax);
//       }
//     else 
//       {
//         printf("\n invalid input plz check !");
//       }
//     return 0;
// }

// 4.Write a program to find whether a year entered by the user is a leap year or not.
// Take year as an input from the user.
// ans : 

// #include <stdio.h>
// int main()
// {
//     int year;
//     printf("\n Enter the year you want to check :");
//     scanf("%d",&year);
//     if((year%4==0 && year%100 != 0) || (year%400 == 0))
//       {
//         printf("\n the year %d is leap year ",year );
//       }
//     else
//       {
//         printf("\n the year %d is not a leap year ",year );
//       }
//     return 0;
// }

// 5.Write a program to determine whether a character entered by the user is
// lowercase or not.
// Ans :

// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("\n Enter the character :");
//     scanf("%c",&ch);
//     if ( ch>= 65&& ch<= 90)
//         {
//             printf("\n The entered character %c is of upper case ",ch);
//         }
//     else if(ch>=97 && ch<=122)
//         {
//             printf("\n The entered character %c is of lower case ",ch);
//         }
//     else  
//         {
//             printf("\n %c is invalid alphabet",ch);
//         }
//     return 0;
// }

//6. Write a program to find greatest of four numbers entered by the user.
// Ans :

// #include <stdio.h>
// int main()
// {
//     int i;
//     float a[4],greatest;
//     for(i=0;i<4;++i)
//         {
//             printf("\n enter the number %d : ",i+1);
//             scanf("%f",&a[i]);
//         }
//     greatest = a[0];
//     for(i=0;i<4;++i)
//         {
//             if (a[i]>greatest)
//                 {
//                     greatest = a[i];
//                 }
//         }
//     printf("\n The greatest number is %f",greatest);
//     return 0;
// }