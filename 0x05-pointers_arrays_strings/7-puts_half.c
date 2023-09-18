#include <stdio.h>
#include "main.h"
/**
 * puts_half - Prints half the characters of a string
 * @str: String
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	length = length - 1;
	if (length % 2 == 0)
	{
		length = length / 2;
		for (; str[length] != '\0'; length++)
		{
			_putchar(str[length]);
		}
	}
	else
	{
		length = (length - 1) / 2;
		for (; str[length] != '\0'; length++)
		{
			_putchar(str[length]);
		}
	}
	_putchar('\n');
}
