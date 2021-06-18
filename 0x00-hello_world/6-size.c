#include <stdio.h>
#include <stdlib.h>
/**
*main - print sizes of data types
*Description: Very simple snippet
*Return: 0
*/
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("Size of a char: %d byte(s)\r\n", sizeof(c));
printf("Size of an int: %d byte(s)\r\n", sizeof(i));
printf("Size of a long int: %d byte(s)\r\n", sizeof(li));
printf("Size of a long long int: %d byte(s)\r\n", sizeof(lli));
printf("Size of a float: %d byte(s)\r\n", sizeof(f));
return (0);
}
