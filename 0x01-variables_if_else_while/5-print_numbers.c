#include <stdio.h>
/**
 * main - prints integres from 0 to 9
 * Return: 0(success)
 */
int main(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
