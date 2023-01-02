#include "main.h"

/**
 * _memset - replace that constant value of array
 * 
 * @s: pointer to memory area to fill
 * @n: the number of bytes to array
 * @b: constant byte
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
