#include "main.h"
/**
 * print_alphabet_x10 - Aimed at printing alphabet in ten times
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char i, j;
	/*LETS PRINT ALPHABET*/
	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
