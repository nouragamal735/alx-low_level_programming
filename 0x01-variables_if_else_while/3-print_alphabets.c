#include<stdio.h>
#include <time.h>

/**
 *main - prints the alphabet in lowercase, and then in uppercase.
 *Return: (0)
 */
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
putchar(x);
for (x = 'A'; x <= 'Z'; x++)
putchar(x);
putchar('\n');
return (0);
}
