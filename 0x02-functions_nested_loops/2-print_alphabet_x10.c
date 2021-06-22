#include "holberton.h"

/**
*void print_alphabet_x10 - prints the alphabet 10 times
*/
void print_alphabet_x10(void)
{
for (i = 0; i < 10; i++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
