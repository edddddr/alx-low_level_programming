ninclude "main.h"
ar *argstostr(int ac, char **av)

{

		char *aout;

			int c, i, j, ia;



				if (ac == 0)

						{

									return (NULL);

										}

					for (c = i = 0; i < ac; i++)

							{

										if (av[i] == NULL)

														return (NULL);



												for (j = 0; av[i][j] != '\0'; j++)

																c++;

														c++;

															}



						aout = malloc((c + 1) * sizeof(char));



							if (aout == NULL)

									{

												free(aout);

														return (NULL);

															}



								for (i = j = ia = 0; ia < c; j++, ia++)

										{

													if (av[i][j] == '\0')

																{

																				aout[ia] = '\n';

																							i++;

																										ia++;

																													j = 0;

																															}

															if (ia < c - 1)

																			aout[ia] = av[i][j];

																}

									aout[ia] = '\0';



										return (aout);

}
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
