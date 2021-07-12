#include <stdio.h>
#include <stdlib.h>
/**
*main - prints number of arguments
*@argc: number of arguments
*@argv: array of arguments
*Return - returns 0
*/
int main(int argc, char *argv[])
{
if (argc < 2)
{
printf("Error\n");
return (1);
}
else
{
int num1, num2, m;
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
m = num1 * num2;
printf("%d\n", m);
}
return (0);
}
