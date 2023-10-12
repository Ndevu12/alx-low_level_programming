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
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
             char *string;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ptr, char*);
		if (separator == NULL)
		{
			continue;
		}
		if(string == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s%s", string, separator);
	}
	va_end(ptr);
	printf("\n");
}
