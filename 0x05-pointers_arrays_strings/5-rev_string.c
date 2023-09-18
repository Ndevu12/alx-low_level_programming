#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int co = 0;
	int i;

	while (s[co] != '\0')
		co++;
	for (i = 0; i < co; i++)
	{
		co--;
		rev = s[i];
		s[i] = s[co];
		s[co] = rev;
	}
}

