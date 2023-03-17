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
for (j = i; j < 10; j++)
{
if (i != 9 || j != 9)
{
putchar(i + '0');
putchar(',');
putchar(' ');
putchar(j + '0');
}
}
}
return (0);
}

