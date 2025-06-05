// PROJECT 1: NUMBER GUESSING GAME

// We will write a program that generates a random number and asks the player to guess
// it. If the player’s guess is higher than the actual number, the program displays “Lower
// number please”. Similarly, if the user’s guess is too low, the program prints “Higher
// number please”.
// When the user guesses the correct number, the program displays the number of
// guesses the player used to arrive at the number.
// Hint: Use loop & use a random number generator.
// Ans :

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int count=1,guess,randomNumber;
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
     randomNumber = (rand() % 100) + 1;

    printf("\n Guess The number :");
    scanf("%d",&guess);
    while(1)
        {
            if (guess==randomNumber)
                {
                    printf("\n congratulations you guessed the number in %d guesses ",count);
                    break;
                }
            else if(guess>randomNumber)
                {
                   printf("\n The number is lower ");
                }
            else 
                {
                    printf("\n The number is higher ");
                }
            ++count;
            printf("\n Guess The number :");
            scanf("%d",&guess);
        }
    return 0;
}
