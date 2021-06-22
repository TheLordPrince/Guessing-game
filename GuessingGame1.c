#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, n_guesses = 1 ;
    srand(time(0));  
    number = rand()%100 + 1;
    // printf("The Generated no. is %d \n", number);

    do
    {
        printf("Guess a number between 1 - 100 \n");
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("Please Enter a Higher number \n");
        }
        else if (guess > number)
        {
            printf("Please enter a Lower number \n");
        }
        else
        {
            printf("You Guessed the number successfully in %d Attempts\n", n_guesses);
        }
        n_guesses++ ;
    } while (guess != number);
    return 0;
}
