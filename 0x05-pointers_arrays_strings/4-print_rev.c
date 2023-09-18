#include "main.h"
#include <string.h>
/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 * @str:
 * Return: o always
 */
void print_rev(char *s)
{
	int i;
	int len = strlen(s);
/*let us use for loop*/
	for ( i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

		_putchar('\n');
}
