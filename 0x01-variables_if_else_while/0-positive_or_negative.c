/* 
  * File: 0-positive_or_negative.c 
  * Auth: Brennan D Baraban 
  */ 

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
    srand(time(0)); /* Seed the random */ 
    n = rand() - RAND_MAX / 2; /* Assi */
    printf("%d ", n); 
    if (n > 0)
        printf("is positive\n");
    else if (n == 0)
        printf("is zero\n");
    else
        printf("is negative\n");
    return (0);
