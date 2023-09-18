#include <stdio.h>
#include "main.h"
/**
 * print_rev - Prints string in reverse
 * @s: String to be reversed
 * Return: void
 */

void _puts(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length != 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
