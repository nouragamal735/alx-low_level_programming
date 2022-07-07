#include<stdio.h>
#include <stdlib.h>

/**
 *main - program that prints all single digits of starting from 0
 *Return: (0)
 */
int main(void)
{
char x;
for (x = 0; x <= 10; x++)
{
printf("%d", x);
}
putchar('\n');
return (0);
}
