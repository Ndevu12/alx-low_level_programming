#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char nut;
/* This isn't a line */
for (nut = 'a'; nut <= 'z'; nut++)
{
if (nut == 'e')
{
continue;
}
if (nut == 'q')
{
continue;
}
putchar(nut);
}
putchar('\n');
return (0);
}
