#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - print to standard error
 * Description: write function
 * Return: return 1
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("%d is zero\n");
}
else if (n < 0)
{
printf("%d is negative\n");
}
else if (n > 0)
{
printf("%d is positive\n");
}
return (0);
}
