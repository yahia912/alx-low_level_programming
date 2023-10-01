/**
 * _puts_recursion - Function that locates a character in a string
 * @s: string
 * Return: void
 */
#include "main.h"

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
