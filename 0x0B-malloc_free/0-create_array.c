#include "main.h"

/**
 * *create_array - char array
 * intialize by char
 * @size: the size an array
 * @c: intialize array char
 * Return: gives or Success, NULL or Error
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int i = 0;

	str = malloc(size);

	if (size == 0)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		return (NULL);
	}

	for (; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
