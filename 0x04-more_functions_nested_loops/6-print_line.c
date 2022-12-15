#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: is the number of times the char _ should be printed
 * Return: 0 Always
 */

void print_line(int n)
{
int a;
if (n > 0)
{
for (a = 0; a < n; a++)
{
_putchar('_');
}
}
_putchar('\n');
}
