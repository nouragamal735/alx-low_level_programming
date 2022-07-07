#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable n
 * Return: (0)
 */
int main(void)
{
int n;
int lastdig;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastdig = n % 10;
if (n > 5)
{
	printf("Last digit of %d is %d and is greater than 5", n, lastdig);
}
if (n == 0)
{
	printf("Last digit of %d is %d and is 0", n, lastdig);
}
if (n < 6 && n != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, lastdig);
}
printf("\n");
return (0);
}
