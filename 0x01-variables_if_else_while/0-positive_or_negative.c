#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point for the program
 *
 * Description: Generates a random number and determines if it is positive,
 *              negative, or zero.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        printf("%d ", n);

        if (n > 0)
                printf("is positive\n");
        else if (n == 0)
                printf("is zero\n");
        else
                printf("is negative\n");

        return (0);
}

