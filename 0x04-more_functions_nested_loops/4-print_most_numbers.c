#include "main.h"

/**
 * print_most_numbers - function that prints numbers, from 0 to 9
 * followed by a new line.
 * neither 2 nor 4
 * Return: 0 Always
 */

void print_most_numbers(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
if (a != '2' && a != '4')
_putchar(a);
}
_putchar('\n');
}
