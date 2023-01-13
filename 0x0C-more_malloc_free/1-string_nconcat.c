<<<<<<< HEAD
#include <stdlib.h>

#include <stdlib.h>

#include "main.h"

/**
 *
 *  * _strlen - calculate and return string length
 *
 *   * @string: string
 *
 *    * Return: string length
 *
 *     */

int _strlen(char *string)

{

		int i;



			for (i = 0; string[i] != '\0'; i++)

						;

				return (i);

}

/**
 *
 *  * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 *
 *   * @s1: string 1
 *
 *    * @s2: string 2
 *
 *     * @n: n bytes to concat from string 2
 *
 *      * Return: pointer to concatenated string
 *
 *       */

=======
#include "main.h"


/**
 * string_nconcat - concatenates two strings.
 * @s1: 1st string.
 * @s2: 2nd string.
 * @n: size of bytes.
 *
 * Return: pointer to the allocated memory 98 it if it fails.
 */
>>>>>>> 66ea9d0691056c534dc385848dbacf528cca71b0
char *string_nconcat(char *s1, char *s2, unsigned int n)

{
<<<<<<< HEAD

		char *ptr;

			int num, len, i, j;



				num = n;



					if (s1 == NULL) /* account for NULL strings */

								s1 = "";

						if (s2 == NULL)

									s2 = "";

							if (num < 0) /* account for negative n bytes */

										return (NULL);

								if (num >= _strlen(s2)) /* account for n too big */

											num = _strlen(s2);



									len = _strlen(s1) + num + 1; /* +1 to account for null pointer */



										ptr = malloc(sizeof(*ptr) * len); /* malloc and check for error */

											if (ptr == NULL)

														return (NULL);



												for (i = 0; s1[i] != '\0'; i++) /* concat */

															ptr[i] = s1[i];

													for (j = 0; j < num; j++)

																ptr[i + j] = s2[j];

														ptr[i + j] = '\0';



															return (ptr);

=======
	char *sout;
	unsigned int ls1, ls2, lsout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lsout = ls1 + n;

	sout = malloc(lsout + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < ls1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - ls1];

	sout[i] = '\0';

	return (sout);
>>>>>>> 66ea9d0691056c534dc385848dbacf528cca71b0
}
