#include <stdio.h>
/**
 * main - Print the alphabets in lowercase except q and e
 * Return: 0(success)
 */
int main(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
