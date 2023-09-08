#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexdec[] = "0123456789abcdef";
	int cal;
	/*Helooooooooooooooo*/
	for (cal = 0; cal < 16; cal++)
	{
		putchar(hexdec[cal]);
	}
	putchar('\n');
	return (0);
}

