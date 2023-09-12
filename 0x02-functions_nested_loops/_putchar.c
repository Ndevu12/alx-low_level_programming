#include <unistd.h>
#include "main.h"
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     */

int _putchar(char k)
{
	return (write(1, &k, 1));
}
