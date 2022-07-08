#include<stdio.h>

/**
 *main - program that prints all possible different combinations of two digits
 *Return: (0)
*/
int main(void)
{
int x;
for (x = 0; x < 10; x++)
{
putchar(x);
if (x != 10)
{
putchar((x / 10) + '0');
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
