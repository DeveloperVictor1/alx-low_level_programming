#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_alphabet - prints the lowercase alphabet followed by a newline
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}

