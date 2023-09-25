#include "main.h"
/**
 * _memcpy - a program that copies memory area
 * @dest: storage memory
 * @src: memory where it is copied from
 * @n: number of bytes
 *
 * Return: copied memory with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[i];
		n--;
	}
	return (dest);
}
