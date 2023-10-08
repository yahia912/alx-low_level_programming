#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: Size of pointer to allocated memory
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b);
{
	int *m = malloc(b);

	if (m == NULL)
	{
		exit(98);
	}
	else
	{
		return (m);
	}
}
