#include<stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/* Main - prints positive negative and zero */

int main(void)
{
int n;
int RAND_MAX = srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("%d is zero", n);
}
else if (n > 0)
{
printf("%d is positive", n);
}
else
{
printf("%d is negative", n);
}
return (0);
}
