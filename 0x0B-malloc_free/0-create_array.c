#include <main.h>
/**
 * *create_array - char array
 * intialize by char
 * @size: the size an array
 * @c: intialize array char 
 *
 * Return: gives or Success, NULL or Error
 */
char *create_array(unsigned int size, char c)
{
char *b;
unsigned int i = 0;
if (size == 0)
return (NULL);
p = (char *) malloc(sizeof(char) * size);
if (b == NULL)
return (0);
while (i < size)
{
*(b + i) = c;
i++;
}
*(b + i) = '\0';
return (p);
}
