#include "main.h"

/**
 * _on_recursion - returne the string length.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
