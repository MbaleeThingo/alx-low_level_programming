#include "main.h"
/**
 * _islower - check the char if it lower case
 * @c: is the character to be checked
 * Return: 1 if it lower case, otherwise 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
