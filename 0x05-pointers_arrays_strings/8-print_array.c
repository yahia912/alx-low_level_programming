#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints items of an array
 * @a: The array
 * @n: number of elements of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < 5; i++)
	{
		printf("%d", a[i]);
		if (i != 4)
		{
			printf(", ");
		}
	}
	printf("\n");
}
