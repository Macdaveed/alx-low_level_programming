#include <stdio.h>

/**
 * main - A program that prints number of arguement
 * @argc: argument counter
 * @argv: arguments vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
