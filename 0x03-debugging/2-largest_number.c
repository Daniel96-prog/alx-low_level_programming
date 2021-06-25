#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int largest, a = 972, b = -98, c = 0;

if (a > b && a > c)
{
largest = a;
}
else if (b > a && b > c)
{
largest = b;
}
else
{
largest = c;
}
printf("%d", largest);
return (0);
}
