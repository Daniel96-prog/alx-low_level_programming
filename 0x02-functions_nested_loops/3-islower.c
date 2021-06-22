#include "holberton.h"
int _islower(int c)
{
char letter = c;
bool is_lower =false;
for (int i ='a'; i<='z'; i++)
{
if (letter == i)
{
is_lower = true;
}
}
is_lower? return (1): return (0);
}
