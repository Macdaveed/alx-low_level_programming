#include <stdio.h>

/**
 * main - A program that print its name
 * @argc: arguement counter
 * @argv: arguement vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
