#include<stdio.h>

/**
 *main - program that prints all possible combinations of three digits
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
if (z > y && y > x)
{
putchar('0' + x);
putchar('0' + y);
putchar('0' + z);
if (z != 9 || y != 8 || x != 7)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
