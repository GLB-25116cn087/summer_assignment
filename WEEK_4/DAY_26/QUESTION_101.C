#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num, guess, attempts = 0;

    srand(time(NULL));

    num = rand() % 100 + 1;

    printf("Guess the number between 1 to 100\n");

    while(1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if(guess == num)
        {
            printf("Correct guess!\n");
            printf("You guessed in %d attempts", attempts);
            break;
        }
        else if(guess > num)
        {
            printf("Your guess is too high\n");
        }
        else
        {
            printf("Your guess is too low\n");
        }
    }

    return 0;
}