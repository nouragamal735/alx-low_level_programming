#include<stdio.h>

/**
 *main -  program that prints all combinations of two two-digit No.
 *Return: (0)
*/
int main(void)
{
int x;
int y;
int z;
int f;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
for (z = 0; z < 10; z++)
{
for (f = 1; f < 10; f++)
{
putchar('0' + x);
putchar('0' + y);
putchar('0' + z);
putchar('0' + f);
if (x != 9 || y != 9 || z != 9 || f != 9)
{
putchar(',');
putchar(' ');
}
if (x != 9 || y != 9)
{
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
