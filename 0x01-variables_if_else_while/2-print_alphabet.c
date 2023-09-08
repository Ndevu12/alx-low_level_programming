#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char nut;
/* This isn't a line */
	for (nut = 'a'; nut <= 'z'; nut++)
	{
		putchar(nut);
	}
	putchar('\n');
	return (0);
}
