/*Number Guessing Game*/
#include <stdio.h>

int main()
{
    int guess, secret = 25;
    int attempts = 5;
    int i;
    char playAgain;

    do
    {
        printf("\n-----------------------------------");
        printf("\n Welcome To Number Guessing Game!");
        printf("\n-----------------------------------");
        printf("\n Rules:");
        printf("\n * Guess the number between 1 to 100.");
        printf("\n * You have %d attempts to find the number.", attempts);
        printf("\n Let's Begin!\n");

        for(i = 1; i <= attempts; i++)
        {
            printf("\n Attempt %d of %d - Enter your guess: ", i, attempts);
            scanf("%d", &guess);

            if(guess == secret)
            {
                printf("\n Congratulations! You guessed the correct number %d!\n", secret);
                break;
            }
            else if(guess < secret)
            {
                printf("\n Too low!");
            }
            else
            {
                printf("\n Too high!");
            }

            if(i < attempts)
            {
                printf(" Attempts left: %d\n", attempts - i);
            }
            else
            {
                printf("\n\n Game Over! You've used all %d attempts.", attempts);
                printf("\n The correct number was: %d\n", secret);
            }
        }

        // Ask to play again
        printf("\n\n Do you want to play again? (Y/N): ");
        scanf(" %c", &playAgain); 

    } while(playAgain == 'Y' || playAgain == 'y');

    printf("\n Thank you for playing! Goodbye.\n");
    return 0;
}
