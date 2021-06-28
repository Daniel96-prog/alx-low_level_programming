#include <string.h>
#include "_putchar.c"
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
current_char = name[i];
name[i] = name[j];
name[j] = current_char;
j--;
}
for (i = 0; i < len; i++)
{
_putchar(name[i]);
}
}
