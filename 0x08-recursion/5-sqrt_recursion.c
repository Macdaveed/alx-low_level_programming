#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recusrion - return the natural square root of a number
 * @: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recusion(n, 0));
}
/**
 * actual_sqrt_recursion _ recurses to find the natural
 * square root of nnumber
 * @n: number to calculate teh sqaure root of
 * @i: iterate
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
