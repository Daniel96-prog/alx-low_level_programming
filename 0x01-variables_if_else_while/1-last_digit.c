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
int lDig = n % 10;
if (lDig == 0)
{
printf("Last digit of %d is %d and is 0", n, lDig);
}
if (lDig == 0)
{
printf("Last digit of %d is %d and is greater than 5", n, lDig);
}
if (lDig == 0)
{
printf("Last digit of %d is %d and is 0", n, lDig);
}
return (0);
}
