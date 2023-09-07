#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the sentence in the task
 * Return: Always 0 (Success)
 */
int main(void)
{
		write(1, "and that piece of art is useful\" - Dora Korpar, ", 48);
		write(1, "2015-10-19", 10);
		write(1, "\n", 1);
		return (1);
}
