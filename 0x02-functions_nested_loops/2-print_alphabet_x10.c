#include "main.h"

/**
 * print_alphabet_x10 - Start
 * Return: void
 */

void print_alphabet_x10(void)
{
int start_count = 0;
char alpha = 'a';
while (start_count < 10)
{
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
start_count++;
}
}
