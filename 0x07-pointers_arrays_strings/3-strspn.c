#include "holberton.h"
/**
* _strspn - gets the length of a prefix substring
**@s: string
*@accept: string
*Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
const char *s1, *s2;
for (s1 = s; *s1 != '\0'; ++s1)
for (s2 = accept; ; ++s2)
if (*s2 == '\0')
return (s1 - s);
else if (*s1 == *s2)
break;
return (s1 - s);
}
