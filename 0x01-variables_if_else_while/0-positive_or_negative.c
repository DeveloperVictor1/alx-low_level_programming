#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
int n;
srand(time(0)); /* Seed the random number generator */
n = rand() - RAND_MAX / 2; /* Assign a random number to n */
printf("%d ", n); /* Print the number */
/* Check if the number is positive, negative, or zero */
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
return (0);
}
