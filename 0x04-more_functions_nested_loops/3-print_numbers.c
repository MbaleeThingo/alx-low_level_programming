#include "main.h"

/**
 * print_numbers - a function that prints numbers, from 0 to 9
 * followed by new line.
 * Return: 0 Always
 */

void print_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
_putchar(i);
_putchar('\n');
}
