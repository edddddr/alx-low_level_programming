#include "main.h"
/**
 * Prints a string in reverse.
 * @s: The string  will printed.
 * Return: No.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
