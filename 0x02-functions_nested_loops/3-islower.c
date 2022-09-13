#include "main.h"
/**
 * _islower - function to check for lower case characters
 * @c: is the int that we will use for the arguments of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
