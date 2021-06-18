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
for (int x = 'A'; x <= 'Z'; x++)
{
  putchar(tolower(x));
}
return (0);
}
