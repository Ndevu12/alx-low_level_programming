#include "main.h"
/**
 * _islower - check for lower chase charactors
 *@c: - is a charactor to be checked
 * Return: 1 for lowercase or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
