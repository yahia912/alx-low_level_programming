#include "main.h"
/**
 * print_alphabet - Function that prints the alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	int i = 'a';

	for (; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
