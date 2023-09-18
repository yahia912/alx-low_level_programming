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

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
