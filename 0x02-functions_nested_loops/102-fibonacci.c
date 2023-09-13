#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 * Return: Always 0.
 */
int main(void)
{
	int num;
	unsigned long fibonac1 = 0, fibonac2 = 1, sum;


	for (num = 0; num < 50; num++)
	{
		sum = fibonac1 + fibonac2;
		printf("%lu", sum);


		fibonac1 = fibonac2;
		fibonac2 = sum;


		if (num == 49)
			printf("\n");
		else
			printf(", ");
	}


	return (0);
}

