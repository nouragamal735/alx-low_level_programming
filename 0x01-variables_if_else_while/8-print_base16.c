#include<stdio.h>

/**
 *main - program that prints all the numbers of base 16 in lowercase
 *Return: (0)
 */
int main(void)
{
int a;
char x;
for (a = 0; a < 10; a++)
{
putchar('0' + a);
}
for (x = 'a'; x <= 'f'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
