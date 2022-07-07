#include<stdio.h>
#include <stdlib.h>

/**
 *main - program that prints all single digit numbers from 0
 *Return: (0)
 */
int main(void)
{
int x = 0;
for (; x < 10; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
