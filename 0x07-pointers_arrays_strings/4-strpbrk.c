#include "holberton.h"
#include <string.h>
/**
**_strpbrk - locates in s the first occurence of bytes in accept
*@s: string
*@accept: string
*Return: s
*/
char *_strpbrk(char *s, char *accept)
{
const char *s1, *s2;
for (s1 = s; *s1 != '\0'; ++s1)
for (s2 = accept; *s2 != '\0'; ++s2)
if (*s1 == *s2)
return ((char *)s1);
return (NULL);
}
