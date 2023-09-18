#include <stdio.h>
#include "main.h"
/**
 * rev_string -  reverse string
 * @s: String to be reversed
 * Return: void
 */

void rev_string(char *s);
{
	int length = 0, oldi, newi;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	for (newi = 0, oldi = length - 1; newi < oldi; oldi--, newi++)
	{
		temp = s[newi];
		s[newi] = s[oldi];
		s[oldi] = temp;
	}
}
