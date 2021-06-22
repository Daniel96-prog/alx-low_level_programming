#include "holberton.h"
int _islower(int c)
{
char letter = c;
int is_lower =0;
for (int i ='a'; i<='z'; i++)
{
if (letter == i)
{
is_lower = 1;
}
}
if (is_lower == 1) return (1);
else return (0);
}
