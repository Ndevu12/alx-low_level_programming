#include "main.h"
#include <string.h>
/**
 * rev_string -  function that reverses a string
 * @s: string array
 * Return: 0 always
 */
void rev_string(char *s)
{
int i, k = 0, len = strlen(s);
/*let us reverse this string*/
for (i = len - 1; i >= 0; i--)
{
if (k <= len)
{
s[k] = s[i];
k++;
}
}
}
