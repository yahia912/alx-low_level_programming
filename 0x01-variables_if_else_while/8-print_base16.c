#include <stdio.h>
/**
 * main - prints integres from 0 to 9
 * Return: 0(success)
 */
int main(void)
{
	int i = 48;

	for (; i <= 102; i++)
	{
		putchar(i);
		if (i == 57)
		{
			i += 39;
		}
	}
	putchar('\n');
	return (0);
}
