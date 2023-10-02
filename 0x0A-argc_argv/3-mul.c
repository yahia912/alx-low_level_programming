#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc:size of argv
 * @argv: array of command line arguements
 * Return:0
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		x = strtol(argv[1], NULL, 10);
		y = strtol(argv[2], NULL, 10);
		result = x * y;
		printf("%d\n", result);
	}
	return (0);
}
