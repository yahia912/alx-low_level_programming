#include "main.h"
/**
 * main - print _putchar
 * Return: 0(success)
 */
int main(void)
{
	char string[] = "_putchar";
	int character = 0;

	for (;character < 8; character++)
	{
		_putchar(string[character]);
	}
	_putchar('\n');
	return (0);
}
