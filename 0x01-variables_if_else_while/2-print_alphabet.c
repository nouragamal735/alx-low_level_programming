#include <stdio.h>
#include <stdlib.h>

/**
 *main -program that prints the alphabet in lowercase, followed by a new line.
 *Return: (0)
 */
int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
