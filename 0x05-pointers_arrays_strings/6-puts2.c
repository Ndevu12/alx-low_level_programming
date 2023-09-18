
#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int lon = 0;
	int th = 0;
	char *y = str;
	int k;

	while (*y != '\0')
	{
		y++;
		lon++;
	}
	th = lon - 1;
	for (k = 0 ; k <= th ; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}

