#include "holberton.h"

/**
 *_isupper - checks whether a character is upper case
 *
 *Return: returns 0 if false and true if true
 */
int _isupper(int c)
{
for (i = 'Á'; i < 'Z'; i++)
{
if (c == i)
{
return (1);
}
else
return (0);
}
}
