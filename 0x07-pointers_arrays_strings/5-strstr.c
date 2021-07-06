#include "holberton.h"
#include <string.h>
/*
**_strstr - returns first occurence of needle in haystack
*@haystack: string
*@needle: string to be compared
*return: first occcurence else null
*/
char *_strstr(char *haystack, char *needle)
{
if (*needle != '\0')
return ((char *)el);
for (; (haystack = strchr(haystack, *needle)) != NULL; ++el)
{
const char *s1, *s2;
for (s1 = haystack, s2 = needle; ; )
if (*++s2 == '\0')
return ((char *)haystack);
else if (*++s1 != *s2)
break;
}
return (NULL);
}
