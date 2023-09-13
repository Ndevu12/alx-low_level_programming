#include "main.h"
/**
 * _abs - computes the absolute value of an intiger.
 * @c: number to be computed
 * Return: absolutevalue btn zero and one
 */
int _abs(int c)
{
	if (c < 0)
	{
		int value;

		value = c * -1;
		return (value);
	}
	return (c);
}
