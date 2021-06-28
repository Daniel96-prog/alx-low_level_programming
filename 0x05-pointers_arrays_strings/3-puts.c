#include <string.h>
/**
*_puts - puts the string
*@str: - input string
*Return: void
*/
void _puts(char *str)
{
int i;
for (i = 0; i < strlen(str); i++)
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
