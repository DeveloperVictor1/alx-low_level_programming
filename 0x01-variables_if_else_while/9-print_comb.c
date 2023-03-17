#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
if (i != 9)
{
putchar(i);
putchar(',');
putchar(' ');
}
}
return (0);
}

