#include "main.h"
/**
 * print_alphabet_x10 - Function that prints the alphabet in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 'a';
	int count = 0;

	for (; count <= 10; count++)
	{
		for (; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
