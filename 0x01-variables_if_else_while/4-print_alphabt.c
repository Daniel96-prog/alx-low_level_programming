#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - print to standard error
 * Description: write function
 * Return: return 0
 */

int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
if(x == 'a')
continue;
if(x == 'q')
continue;
putchar(x);
}
putchar('\n');
return (0);
}
