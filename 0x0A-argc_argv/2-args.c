#include <stdio.h>
/**
 * main - prints all arguements
 * @argc:size of argv
 * @argv: array of command line arguements
 * Return:0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
