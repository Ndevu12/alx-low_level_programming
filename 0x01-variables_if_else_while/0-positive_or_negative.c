#include <stdlib.h>
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
if (n > 0)
{
printf("%d is zero\n", n);
}
else if(n == 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is negative\nn", n);
}
return (0);
}
