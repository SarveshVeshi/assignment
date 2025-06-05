// 1. Which of the following is used to appropriately read a multi-word string.
// 1. gets()
// 2. puts()
// 3. printf()
// 4. scanf()

// ans : -> gets();

// 2. Write a program to take string as an input from the user using %c and %s confirm
// that the strings are equal.
// ans : 

// #include <stdio.h>
// int main()
// {
//     char ch[10];
//     int i;
//     printf("\n Enter the string :");
//     // scanf("%s", ch);
//     for(i=0;i<9;++i)
//         {
//             scanf("%c", &ch[i]);
//         }
//     ch[i]='\0';
//     printf("\n %s \n",ch);
//     return 0;
// }

// 3. Write your own version of strlen function from <string.h>
// ans: 

// #include <stdio.h>
// int mystrlen(char []);
// int mystrlen(char a[])
// {
//     int i=0,count=0;
//     while(a[i]!='\0')
//         {
//             ++count;
//             ++i;
//         }
//     return (count);
// }
// int main()
// {
//     char ch[15] = "tony_stark";
//     // printf("\n The string is :%s",ch);
//     printf("\n The length of the string is :  %d \n",mystrlen(ch));
//     return 0;
// }

// 4. Write a function slice() to slice a string. It should change the original string such
// that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
// for slice.
// Ans : 

// #include<stdio.h>
// char* slice (char [],int,int);
// char* slice (char a[],int m,int n)
// {
//     int j=0,i=0;
//     for(i=m-1;i<=n-1;++i)
//         {
//             a[j]= a[i];
//             ++j;
//         }
//     a[j]='\0';
//     return a;
// }
// int main()
// {
//     char ch[15]="tony_stark";
//     printf("\n The string is : %s",ch);
//     printf("\n The sliced string is : %s",slice(ch,1,5));
//     return 0;
// }

// 5. Write your own version of strcpy function from <string.h>
// ans : 

// #include <stdio.h>
// char* mystrcpy(char a[],char ch[])
// {
//     int i=0;
//     while(a[i]!='\0')
//         {
//             ch[i]=a[i];
//             ++i;
//         }   
//     ch[i]='\0';
//     return ch;
// }
// int main()
// {
//     char ch[15],a[15]="Tony_stark";
//     printf("\n The string is :%s",a);
//     printf("\n string copied string :%s",mystrcpy(a,ch));
//     return 0;
// }

// 6. Write a program to encrypt a string by adding 1 to the ascii value of its
// characters.
// Ans : 

// #include <stdio.h>

// int main()
// {
//     char ch[50]="hello world";
//     int i=0;
//     printf("The string is : %s\n",ch);
//     while(ch[i]!='\0')
//         {
//             ch[i]= ch[i] + 1 ;
//             ++i;
//         }
//     ch[i]='\0';
//     printf("The string is : %s\n",ch);
//     return 0;
// }

// 7. Write a program to decrypt the string encrypted using encrypt function in
// problem 6.
// ans : 

// #include <stdio.h>

// int main()
// {
//     char ch[50]="ifmmp!xpsme";
//     int i=0;
//     printf("The string is : %s\n",ch);
//     while(ch[i]!='\0')
//         {
//             ch[i]= ch[i] - 1 ;
//             ++i;
//         }
//     ch[i]='\0';
//     printf("The string is : %s\n",ch);
//     return 0;
// }

// 8. Write a program to count the occurrence of a given character in a string.
// Ans:

// #include <stdio.h>
// int main()
// {
//     char a[50] = "ifmmp!xpsme";
//     int i=0,count=0;
//     printf("The string is :%s\n",a);
//     while(a[i]!='\0')
//         {
//             if(a[i]=='m')
//             {
//                 ++count;
//             }
//             ++i;
//         }
//     printf("The number of times m occures is : %d\n",count);
//     return 0;
// }

// 9. Write a program to check whether a given character is present in a string or not.
// Ans: 

// #include <stdio.h>
// int main()
// {
//     char a[50] = "ifmmp!xpsme";
//     int i=0,count=0;
//     printf("The string is :%s\n",a);
//     while(a[i]!='\0')
//         {
//             if(a[i]=='e')
//             {
//                 count=1;
//                 break;
//             }
//             ++i;
//         }
//     if(count==1)
//         {
//             printf("The character 'e' is present \n");
//         }
//     else
//         {
//             printf("The character 'e' is not present .\n");
//         }
//     return 0;
// }
