#include <stddef.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers -this function prints all number followed by a string
 * @n: initial argument
 * Return: 0 if separator  == \0
 * Otherwise sum
 */
void print_numbers(const char *separator, const unsigned int n, ...) 
{
	unsigned int i;
	va_list ptr;


	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			continue;
		}

		printf("%u%s", va_arg(ptr,unsigned int), separator);
	}
	va_end(ptr);
	printf("\n");
}
