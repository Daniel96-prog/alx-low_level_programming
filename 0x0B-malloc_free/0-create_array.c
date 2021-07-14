#include<stdlib.h>
/**
*create_array -initializes a char array with c
*@size: size of char array
*@c: chracter to be initialized to the array
*Return: null if size is 0, else pointer to string
*/
char *create_array(unsigned int size, char c)
{
int s;
s = size;
if (s == 0)
{
return (NULL);
}
else
{
char *ch;
int count;
ch = malloc(sizeof(char) * s);
count = 0;
while (count < s)
{
ch[count] = c;
count++;
}
return (ch);
}
}
