#include"holberton.h"
#include<stdlib.h>

#definetrue1
#definefalse0
#defineboolint

/**
*_strstr-locatesasubstring
*@haystack:stringtobesearched
*@needle:substringtobefound
*Return:pointertosubstringorNULLifnotfound
*/
char*_strstr(char*haystack,char*needle)
{
char*start=haystack;
char*_needle=needle;
boolfound=false;

if(!*_needle)
return(haystack);

while(*haystack)
{
if(*haystack==*needle)
	{
	found=true;
	start=haystack;
	while(*_needle)
	{
	if(*haystack!=*_needle)
		{
		found=false;
		_needle=needle;
		break;
		}

	haystack++;
	_needle++;
	}
	}

if(found)
	{
	break;
	}

haystack++;
}
if(found)
{
return(start);
}

return(NULL);
}
