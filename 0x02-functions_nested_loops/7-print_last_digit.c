#include "main.h"

/**
 * print_last_digit - It will check an entere number and print its last digit
 * @n: number to be used
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lastd;
	/*let us get digit*/
	lastd = n % 10;
	if (lastd < 0)
	{
		lastd = lastd * -1;
	}
	_putchar(lastd + '0');
	return (lastd);
}
