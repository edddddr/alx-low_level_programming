#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void printnumber(int n)
{
    if(i/10!=0)
    {
        printnumber(i/10);
        if ( n > 0 )
        {
           putchar(n%10 + '0');
        }
        else
        {
           putchar(-n%10 + '0');
        }
    }
    else if((n/10==0) && (n%10!=0) && (n>0))
    {
        putchar(n%10 + '0');
    }
    else if((i/10==0) && (i%10!=0) && (i<=0))
    {
        putchar('-');
        putchar(-n%10+'0');
    }    
}
