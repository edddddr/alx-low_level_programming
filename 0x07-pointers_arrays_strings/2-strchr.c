#include "main.h"
#include <stddef.h>
/**
 * _strchr - prints found c
 * @s: pointer to char
 * @c: a parameter that we found
 * Return: *S
*/

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
	if (*s == c)
		return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	else
	return (NULL);
}
