#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1; // yai 1 to 100 random number genrate kariga
    // printf("the number is %d", number);
    //  loop chalyaigai number gusse karnai kai liyai

    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower number please\n");
        }
        else if (guess < number)
        {
            printf("higher number please\n");
        }
        else
        {
            printf("you gussed it in %d attemot\n", nguess);
        }
        nguess++;

    } while (guess != number);

    return 0;
}