#include <stdio.h>
/**
 * main - Print the alphabets in lowercase
 * Return: 0(success)
 */
int main(void)
{
	char ch = 'z';

	for (; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
