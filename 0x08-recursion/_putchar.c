#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: The char to print
 *
 * Return: 1 On success
 * On error, -1 is returned, and error no is set appropriately.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
