#include "main.h"
/**
 * swap_int - function swaps the values of two integers.
 * @a: take a first value
 * @b: take second value
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
int k;
k = *a;
*a = *b;
*b = k;
}
