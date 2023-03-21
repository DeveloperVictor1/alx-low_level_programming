#include <unistd.h>
/**
 * main - entry point
 * Description: Prints _putchar, followed by a new line.
 * Return: Always 0 (success)
 */
int _putchar(char c)
{
	return(write(1,&c,1));
}
