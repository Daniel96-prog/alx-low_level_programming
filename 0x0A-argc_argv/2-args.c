#include <stdio.h>
/**
*main - prints all arguments
*@argc: argument count
*@argv: array of arguments
*Return: return 0
*/
int main(int argc, char *argv[])
{
int count;
printf("%s\n", argv[0]);
for (count = 1; count < argc; count++)
{
printf("%s\n", argv[count]);
}
return (0);
}
