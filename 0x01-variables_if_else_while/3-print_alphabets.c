#include <stdio.h>

/**
 * main - Prints the alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);

	}
	purchar('\n');
	return (0);
}
