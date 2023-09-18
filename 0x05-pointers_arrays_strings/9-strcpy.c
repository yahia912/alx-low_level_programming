#include <stdio.h>
#include "main.h"
/**
 * _strcpy - Copies string to array
 * @dest: The array
 * @src: The string
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
