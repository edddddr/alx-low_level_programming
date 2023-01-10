#include "main.h"
#include <stdlib.h>
/**
 * _strdup - allocate the space in the memory
 * @str: string
 *
 * Return: put the pointer return value
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int u, s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[u] != '\0'; u++)
		;

	strout = (char *)malloc(sizeof(char) * (u + 1));

	if (strout == NULL)
		return (NULL);

	for (s = 0; s <= u; s++)
		strout[s] = str[s];

	return (strout);
}
