include <string.h>
/**
*rev_string - reverses a string
*
*Return: void
*@s: input string
*/
void rev_string(char *s)
{
int len, current_char, i, j;
len = strlen(s);
j = len - 1;
for (i = 0; i < j; i++)
{
current_char = name[i];
name[i] = name[j];
name[j] = current_char;
j--;
}
}
