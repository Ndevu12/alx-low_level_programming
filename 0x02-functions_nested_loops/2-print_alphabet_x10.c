#include "main.h"
/***
 * print_alphabet_x10 - Aimed at printing alphabet in ten times
 * @i: charactor to be printed
 * @j: charactor to used for loop
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char i, j;
	/*LETS PRINT ALPHABET*/
	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
