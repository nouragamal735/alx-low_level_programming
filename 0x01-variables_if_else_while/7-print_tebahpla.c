#include<stdio.h>
#include <stdlib.h>

/**
 *main - program that print alphabet in reverse order
 *Return: (0)
*/
int main(void)
{
char x;
for (x = 'z'; x >= 'a'; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}
