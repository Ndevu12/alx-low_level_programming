#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)
{
int a, b, c;
/*This is what we call to train a brain*/
for (a = 0; a <= 98; a++)
{
for (b = a  + 1; b <= 99; b++)
{
for (c = b + 1; c <= '9'; c++)
{
if ((b != a) != c)
{
putchar(a);
putchar(b);
putchar(c);
if (a == '7' && b == '8')
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
