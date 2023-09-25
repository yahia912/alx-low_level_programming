#include "main.h"
/**
 * _memset - Function that fills memory with a constant byte.
 * @s: Points to a memory area to be filled
 * @b: Character to fill memory are with
 * @n: Fill how many bytes of memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return(s)
}
