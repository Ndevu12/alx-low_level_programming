#include "main.h"

/**
 * jack_bauer - Print every minute of the day
 * Return: ...
 */
void jack_bauer(void)
{
	int i, j, c, d;
/*let us print these minutes using for loop*/
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <=  9; j++)
		{
			if ((i <= 2 && j <= 9) || (i <= 2 && j <= 3))
			{
				for (c = 0; c <= 5; c++)
				{
					for (d = 0; d <= 9; d++)
					{
						_putchar(i + '0');
						_putchar(j + '0');
						_putchar(58);
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
