#include <stdio.h>
/**
 * swap_int - Swaps two values
 * @a: Pointer to an integer
 * @b: pointer to an integer
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
