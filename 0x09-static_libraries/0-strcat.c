#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: String to append to
 * @src: string to append
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int q = 0;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	for (; srclen > 0; srclen--, q++, destlen++)
	{
		dest[destlen] = src[q];
	}
	dest[destlen] = '\0';
	return (dest);
}
