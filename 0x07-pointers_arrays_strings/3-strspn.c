



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

	int i;



	while (*s)

	{

		for (i = 0; accept[i]; i++)

		{

			if (*s == accept[i])

			{

				return (s);

			}

		}

		s++;

	}

	return (NULL);

}
