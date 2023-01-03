#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searchs a string of bytes
 * @s: sources of a string
 * @accept: a pointer to the char bytes in @s
 * Return: the NULL vlue if no file thier
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
