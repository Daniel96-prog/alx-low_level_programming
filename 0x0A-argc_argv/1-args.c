#include <stdio.h>
/**
*main - prints number of arguments
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 0
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
if (argc < 2)
printf(0);
else
printf("%d\n", argc);
return (0);
}
