#include "main.h"

/**
 * _strchr - prints found c
 * @s: pointer to char
 * @c: a parameter that we found
 * Return: *S
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
