#include "holberton.h"

/**
*void print_alphabet_x10 - prints the alphabet 10 times
Description: print_alphabet_x10 - prints the alphabet 10 times
*/
void print_alphabet_x10(void)
{
int i;
  int j;
for (i = 0; i < 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
