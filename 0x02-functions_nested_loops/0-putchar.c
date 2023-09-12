#include "main.h"
/**
 * main - prints _putchar, followed by a new line. 
 * Return: 0(success)
 */
int main(void)
{
	char string[] = "_putchar";
	for (int character = 0; character<8; character++)
	{
		_putchar(string[character]);
	}
	_putchar('\n');
	return (0);
}
