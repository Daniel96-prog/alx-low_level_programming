#include <string.h>
/**
*_puts - puts the string
*Return: void
*/
void _puts(char *str)
{
for(int i = 0; i < strlen(str); i++)
{
putchar(str[i]);
}
putchar('\n');
for(int i = strlen(str); i >= 0 ; i--)
{
putchar(str[i]);
}
putchar('\n');
return (0);
}
