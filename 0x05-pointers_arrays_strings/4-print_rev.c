#include <string.h>
#include "holberton.h"
/**
*print_rev -print s astring in reverse
*Return: void
*/
void print_rev(char *s)
{
int len, i, j;
len = strlen(s);
j = len - 1;
for (i = 0; i < j; i++)
{
putchar(s[j]);
j--;
}
}
