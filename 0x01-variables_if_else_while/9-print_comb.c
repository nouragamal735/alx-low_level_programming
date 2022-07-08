#include<stdio.h>

/**
 *main - program that prints all possible combinations of single-digit NO.
 *Return: (0)
*/
int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
putchar('0' + a);
if (a != 10)
{
putchar(' ');
putchar(',');
}
}
putchar('\n');
return (0);
}
