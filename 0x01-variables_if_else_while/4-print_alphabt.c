#include<stdio.h>
#include <stdlib.h>

/**
 *main - program that prints the alphabet in lowercase except q,e
 *Return: (0)
 */
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
if (x != 'q' && x != 'e')
{
putchar(x);
}
}
putchar('\n');
return (0);
}
