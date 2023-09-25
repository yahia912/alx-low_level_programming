#include "main.h"
/**
 * _strspn - get length of substring prefix
 * @s: string
 * @accept: string to match
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					k++;
				}
			}
		}
		else
		{
			break;
		}
	}
	return (k);
}
