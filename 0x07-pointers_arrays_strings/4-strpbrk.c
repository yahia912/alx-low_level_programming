#include "main.h"
/**
 * _strpbrk - Function that ..
 * @s: string
 * @accept: to be matched
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return ('\0');
	return (0);
}
