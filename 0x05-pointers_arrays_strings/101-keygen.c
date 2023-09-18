#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p[100];
	int i, total, n;

	total = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		p[i] = rand() % 78;
		total += (p[i] + '0');
		putchar(p[i] + '0');
		if ((2772 - total) - '0' < 78)
		{
			n = 2772 - total - '0';
			total += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}

