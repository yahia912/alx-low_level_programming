#include "main.h"
/**
 * _abs - returns absolute value of an int
 * @n: integer from which to get an the last digit
 * Return: Void.
 */

int print_last_digit(int n)
{
	int last;
	if (n < 0)
	{
		last = -1 * (n % 10);	
	}
	else
	{
		last = n % 10;
	}
	_putchar(last);
	return (last + '0');
}
