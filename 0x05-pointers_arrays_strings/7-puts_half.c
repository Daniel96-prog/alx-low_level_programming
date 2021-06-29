include <string.h>
#include "_putchar.c"
/**
*puts_half - reverses a string
*
*Return: void
*@str: input string
*/
void puts_half(char *str)
{
int i;
int len = strlen(str);
if (len % 2 == 0)
{
i = len / 2;
for (i; i < len; i++)
{
_putchar(str[i]);
}
}
else
{
i = (len - 1) / 2;
for (i; i < len; i++)
{
_putchar(str[i]);
}
}
}
