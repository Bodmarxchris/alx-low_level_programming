#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an interger
 * @c: is the int that we will be using fot the argument of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}