#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	char value;
	/*let us prints the numbers, from 0 to 9, followed by a new line.*/
	for (value = '0'; value <= '9'; value++)
	{
		_putchar(value);
	}
	_putchar('\n');
}

