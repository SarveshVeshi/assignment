// 1. Write a C program to calculate area of a rectangle:
// a. Using hard coded inputs.
// b. Using inputs supplied by the user.
// code :

// #include <stdio.h>
// int main()
// {
//     int length,breadth;
//     printf("\n Enter the length and breadth of the rectangle : ");
//     scanf("%d%d",&length,&breadth);
//     printf("\n Area of the rectangle : %d",length*breadth);
//     return 0;
// }

// 2. Calculate the area of a circle and modify the same program to calculate the
// volume of a cylinder given its radius and height. pie*r*r*h
// code :

// #include <stdio.h>
// int main()
// {
//     int radius,height;
//     printf("\n Enter the radius :");
//     scanf("%d",&radius);
//     printf("\n Area of the circle of radius %d is %f : ",radius,3.14159265359*radius*radius);
//     printf("\n Enter the radius and height of the cylinder:");
//     scanf("%d%d",&radius,&height);
//     printf("\n The volume of the cylinder is : %f",3.14*radius*radius*height);
//     return 0;
// }

// 3. Write a program to convert Celsius (Centigrade degrees temperature to
// Fahrenheit). (celsius * 9/5) + 32 
// code :

// #include <stdio.h>

// int main()
// {
//     float celsius;
//     printf("\n Enter The temperature in Celsius : ");
//     scanf("%f",&celsius);
//     printf("\n the value in Fahrenheit : %f ",celsius*9/5+32);

//     return 0;
// }

// 4. Write a program to calculate simple interest for a set of values representing
// principal , number of years and rate of interest.
// code :  simple interest = p*r*t

// #include <stdio.h>

// int main()
// {
//     float principal_amount,no_of_years,rate_of_interest= 5.5 ;
//     printf("\n Enter the  principal amount  , no of years of your FD:");
//     scanf("%f%f",&principal_amount,&no_of_years);
//     printf("\n Your simple interest is  : %f",principal_amount*no_of_years*rate_of_interest);
//     return 0;
// }