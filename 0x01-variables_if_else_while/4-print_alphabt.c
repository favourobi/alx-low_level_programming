#include <stdio.h>

/**
 * main - Start
 * Here, we will exclude q and e
 * Return: 0
 */

int main(void)
{
char beta = 'a';
while (beta <= 'z')
{
if (beta != 'q')
{
if (beta != 'e')
putchar(beta);
}
beta++;
}
putchar('\n');
return (0);
}
