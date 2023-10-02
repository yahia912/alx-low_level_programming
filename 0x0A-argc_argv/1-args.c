#include <stdio.h>
/**
 * main - prints number of arguements passed
 * @argc:size of argv
 * @argv: array of command line arguements
 * Return:0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
