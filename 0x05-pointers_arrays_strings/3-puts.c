#include <string.h>
#include "_putchar.c"
/**
*_puts - puts the string
*@str: - input string
*Return: void
*/
void _puts(char *str)
{
int i, len;
len =  strlen(str);
for (i = 0; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
for (i = strlen(str); i >= 0 ; i--)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}
