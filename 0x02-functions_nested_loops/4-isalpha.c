#include "main.h"
/**
 * _isalpha - checks char alphabet if it lower or upper case
 * @c: is the character that will be checked
 * Return: 1 if character is lower or upper case, otherwise 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z))
return (1);
else
return (0);
}
