#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @s: size of the triangle
 */
void print_triangle(int s)
{
	if (s <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int r, l;

		for (r = 1; r <= s; r++)
		{
			for (l = r; l < s; l++)
			{
				_putchar(' ');
			}

			for (l = 1; l <= r; l++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

