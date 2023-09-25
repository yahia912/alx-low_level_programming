#include "main.h"
/**
 * _strchr - Function that locates a character in a string
 * @s: string
 * @c: character to be located
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != c)
	{
		i++;
	}
	while (s[i] != '\0')
	{
		return (s + i);
	}
	return ('\0');
}
