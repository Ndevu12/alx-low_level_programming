#include "main.h"
/***
 * print_alphabet_x10 - Aimed at printing alphabet in ten times
 * Return: nothing
 */
void print_alphabet_x10()
{ 
	char i, j;
 for (i = 'a'; i <= 'z'; i++)
 {
	 for (j = 'a'; j <= 'z'; j++)
	 {
		 _putchar(j);
	 }
	 _putchar('\n');
 }
}
