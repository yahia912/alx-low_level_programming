#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Finds last digit and classifies it
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = (n % 10);
	if (last > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else if (last < 6 && last != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
