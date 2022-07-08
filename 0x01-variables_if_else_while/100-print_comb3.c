#include<stdio.h>

/**
 *main - program that prints all possible different combinations of two digits
 *Return: (0)
*/
int main(void)
{
int x;
int n;
for (x = 0; x < 10; x++)
{
for (n = 0; n < 10; n++)
{
if (n > x)
{
putchar('0' + x);
putchar(n);
if (x != 9 || n != 10)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
