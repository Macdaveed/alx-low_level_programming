#include <stdio.h>

/**
 * main - A program that prints its name
 * @argc - arguement count
 * @argv - arguements vector
 * Return: Always return 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("Program name: %s\n", argv[0]);
	return (0);
}
