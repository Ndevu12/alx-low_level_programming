#include "main.h"
/**
 *__memset - function
 * @s: first pointer
 * @b: second
 * @n: number
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

