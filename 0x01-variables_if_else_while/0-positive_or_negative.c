/* 
  * File: 0-positive_or_negative.c 
  * Auth: Brennan D Baraban 
  */ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** 
* main - Prints a random number and states whether 
*        it is positive, negative, or zero. 
* 
* Return: Always 0. 
*/ 
int main() {
int n;
srand(time(NULL));  
n = rand() % RAND_MAX - RAND_MAX / 2;  // generate a random number between
printf("%d is ", n);
if (n > 0) {
printf("positive\n");
 }
else if (n < 0) {
printf("negative\n"); }
else {
printf("zero\n"); }
return (0);
}

