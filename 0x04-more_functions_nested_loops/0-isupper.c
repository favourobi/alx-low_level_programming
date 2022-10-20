#include "main.h"


/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
char upperCase = 'A';
int upper_let = 0;
for (; upperCase <= 'Z'; upperCase++)
{
if (c == upperCase)
{
upper_let = 1;
break;
}
}
return (upper_let);
}
