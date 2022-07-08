#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void positive_or_negative(int i){
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive", n)
	return (0);
}
/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
