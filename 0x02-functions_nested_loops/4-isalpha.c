#include "main.h"
#include <stdio.h>

/**
 * _isalpha - it will check whether entered values is charactor
 * @c: it is a prameter to be checked
 * Return: 1 if c isa letter, lowecase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
