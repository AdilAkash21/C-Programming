#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // Initialize random number generator
    srand(time(0));

    // Generate 10 random numbers between 1 and 100

    int randomNum = (rand() % 100) + 1;
    int guessed = 0;
    int no_of_guesses = 0;

    // Print the random number
    // printf("%d\n", randomNum);

    do
    {
        printf("Guess the number");
        scanf("%d", &guessed);
        if (guessed > randomNum)
        {
            printf("Lower number please!\n");
        }
        else if (randomNum > guessed)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed it right!\n");
        }
        no_of_guesses++;

    } while (guessed != randomNum);
    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}
