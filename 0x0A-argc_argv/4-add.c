#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
*main - sums up all arguments
*@argc: argument count
*@argv: argument array
*Return: 0
*/
int main(int argc, char *argv[])
{
if (argc < 2)
{
printf("%d\n", 0);
}
else
{
int counter, sum;
sum = 0;
for (counter = 1; counter < argc; counter++)
{
if (atoi(argv[counter]))
{
sum += (atoi(argv[counter]));
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}
return (0);
}
