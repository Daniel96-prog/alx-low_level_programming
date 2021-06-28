#include <string.h>
#include "holberton.h"
/**
*print_rev -print s astring in reverse
*Return: void
*/
void print_rev(char *s)
{
int len, current_char, i, j;
len = strlen(s);
j = len - 1;
for (i = 0; i < j; i++)
{
current_char = s[i];
s[i] = s[j];
s[j] = current_char;
j--;
}
for (i = 0; i < len; i++)
{
_putchar(s[i]);
}
}
