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
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
for (z = 0; z < 10; z++)
{
putchar('0' + x);
putchar('0' + y);
putchar('0' + z);
if (x != 9 || y != 9 || z != 9)
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
