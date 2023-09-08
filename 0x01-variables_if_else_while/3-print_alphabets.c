#include <stdio.h>
/**
 * main - Print the alphabets in lowercase
 * Return: 0(success)
 */
int main(void)
{
	char ch = 'a';
	char chs = 'A';

	for (; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (; chs <= 'Z'; chs++)
	{
		putchar(chs);
	}
	putchar('\n');
	return (0);
}
