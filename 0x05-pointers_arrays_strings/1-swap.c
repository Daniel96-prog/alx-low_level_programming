**
*swap_int - swaps int values
*
*@a: int a
*@b: value of b
*@c: changer value
*Return: 0
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
