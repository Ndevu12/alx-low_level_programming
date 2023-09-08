#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char nut, nat;
/* This isn't a line */
for (nut = 'a'; nut <= 'z'; nut++)
{
putchar(nut);
}
putchar('\n');
/* This isn't a space.*/
for (nat = 'A'; nat <= 'Z'; nat++)
{
putchar(nat);
}
return (0);
}
