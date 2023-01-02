#include "main.h"

/**
  * _strspn - search th length of a string for a set of bytes in prefix
  * @s: source of string
  * @accept: accepted the byt
  *
  * Return: number of bytes in the initial segment of @s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
