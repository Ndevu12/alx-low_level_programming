#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @nun: number of times the character \ should be printed
 */

void print_diagonal(int nun)
{
	if (nun <= 0)
	{
		_putchar('\n');
	} else
	{
		int r, j;

		for (r = 0; r < nun; r++)
		{
			for (j = 0; j < nun; j++)
			{
				if (j == r)
					_putchar('\\');
				else if (j < r)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}



