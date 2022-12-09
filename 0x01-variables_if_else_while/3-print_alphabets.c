#include <stdio.h>

/**
* main - Enter pint
* REturn always 0 (success)
*/
int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != '0' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
