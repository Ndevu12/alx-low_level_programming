#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -this function sum up all it's arguments
 * @n: initial argument
 * Return: 0 if n == 0
 * otherwise sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum  = 0;
	va_list ptr;
	if (n == 0)
	{
		return 0;
	}

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr,unsigned int);
	}
        va_end(ptr);
	return sum;	
}
