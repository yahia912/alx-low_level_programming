#include "main.h"
/**
 * print_alphabet_x10 - Function that prints the alphabet in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	int count;

	for (count = 0; count <= 10; count++)
	{
		for (a = '0'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
