#include "holberton.h"
/**
*print_alphabet - abc
*Description: prints alphabes in lower case followed by a new line
*return: void
*/
void print_alphabet(void);

void print_alphabet(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
