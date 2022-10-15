#include <stdio.h>

/**
 * main - Begin Here
 * Alpha - Refers to the Uppercase Letters
 * Beta - Talks about lower case letters
 * Return: 0 [Success]
 */
int main(void)
{
char alpha = 'A';
char beta = 'a';
while ((alpha <= 'Z'))
{
putchar(alpha);
alpha++;
}
while (beta <= 'z')
{
putchar(beta);
beta++;
}
putchar('\n');
return (0);
}
