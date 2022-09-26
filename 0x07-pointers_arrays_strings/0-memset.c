#include "main.h"

/**
 * _memset - fills memory witha constant
 *
 * @s: pointer to string
 * @b: constant byte
 * @n: first bytes to change
 * Return: pointer to be modified by string
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n -1] = b;
		n--;
	}
	return (s);
}
