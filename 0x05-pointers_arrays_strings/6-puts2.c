#include <string.h>
#include "_putchar.c"
/**
*puts2 - reverses a string
*
*Return: void
*@str: input string
*/
void puts2(char *str)
{
int len = strlen(str);
int i;
for (i = 0; i < len;)
{
_putchar(str[i]);
i += 2;
}
}
