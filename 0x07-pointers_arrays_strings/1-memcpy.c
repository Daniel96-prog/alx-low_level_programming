#include "holberton.h"
/**
* _memcpy -copy's n bytes from memory area src  into memory area dest
* @dest: string to be copied to
* srcb: string to copy
* @n: integer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *s1;
char *s2;
for (s1 = dest, s2 = src; n > 0; ++s1, ++s2, --n)
{
*s1 = *s2;
}
return (s1);
}
