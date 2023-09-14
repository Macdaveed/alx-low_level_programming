#include <stdio.h>
/**
 * main - A program that multiplies two integer
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, Result = 0;
	printf("Type two numbers: ");
	scanf("%d, %d", &a, &b);
	Result = a * b;
	printf("Result is: %d\n"Result);
	return 0;
}

