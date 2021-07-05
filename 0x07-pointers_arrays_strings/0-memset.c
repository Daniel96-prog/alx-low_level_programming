#include "holberton.h"
/**
**_memset: sets memory
*@s: pointer to the string
*@b: char to be added
*@n: int
*Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
char *s1;
const unsigned char c = b;
for (s1 = s; n > 0; ++s1, --n)
*s1 = c;
return (s);
}
