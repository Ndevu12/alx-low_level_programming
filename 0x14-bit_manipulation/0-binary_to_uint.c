#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * int binary_to_uint - converts a binary number to an unsigned int
 * @b: number to be converted
 * Return: converted number otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	int count = strlen(b);
	unsigned int result = 0;
	int i;
	
	for (i = 0; i < count; i++)
	{
		char read = b[i];
		if (read == '0' || read == '1')
		{ 
			result = (result << 1) | (read - '0');
		}
		else
			return (0);
	}
	return (result);
}

