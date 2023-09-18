#include <stdio.h>
/**
 * _strlen - counts sting length
 * @s: String to count
 * Return: Length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
