nclude <stdlib.h>
#include <time.h>
#include <stdio.h>
/* *
 * manin - This program will show if a number is psitive or negative.
 * Return: 0(success)
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if (n==0)
					{
		printf("%d is zero\n");
					}
					else if(n>0)
					{
						printf("%d is positive");
					}
					else
					{
						printf("%d is negative");
					}
					return (0);
}
