#include "holberton.h"
#include <string.h>
/**
* _strchr - strchr finds
*@s: string
*@c: char
*return: s
*/
char *_strchr(char *s, char c)
{
char ch = c;
for (; *s != ch; ++s)
if (*s == '\0')
return (NULL);
return ((char *)s);
}
