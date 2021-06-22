#include "holberton.h"
int _isalpha(int c)
{
char letter = c;
int is_lower =0;
int i, j;
for (i ='A'; i<='Z'; i++)
{
  for (j ='a'; j<='z'; j++)
           {
               if (letter == i || letter == j)
               {
                   is_lower = 1;
               }
           }
}
if (is_lower == 1) return (1);
else return (0);
}
