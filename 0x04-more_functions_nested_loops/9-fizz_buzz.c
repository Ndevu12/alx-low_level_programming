#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;
/*this is a body of this program*/
	for (r = 1; r <= 100; r++)
	{
		if (r % 3 == 0 && r % 5 != 0)
		{
			printf(" Fizz");
		} else if (r % 5 == 0 && r % 3 != 0)
		{
			printf(" Buzz");
		} else if (r % 3 == 0 && r % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (r == 1)
		{
			printf("%d", r);
		} else
		{
			printf(" %d", r);
		}
	}
	printf("\n");

	return (0);
}

