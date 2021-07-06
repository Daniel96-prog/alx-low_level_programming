#include "holberton.h"
/*
**_strspn - gets the length of accept char that are contained in s
**@s: string
*@accept: string
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
