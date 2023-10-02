#include "main.h"
/**
 * _memcpy - Function that fills memory with a constant byte.
 * @dest: Points to a memory area to be filled
 * @src: Character to fill memory with
 * @n: Fill how many bytes of memory area
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
