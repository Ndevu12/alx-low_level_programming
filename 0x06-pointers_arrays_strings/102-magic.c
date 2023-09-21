#include <stdio.h>
/**
 * main - let us do a magic
 * Return: alwayas 0
 */
int main(void)
{
	int k;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &k;
	/**
	 * main - wwrite your line of code here...
	 * Remember:
	 * - you are not allowd to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anything else than this line of code
	 */
	*(p + 5) = 98;
	/* ...so let us prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}

