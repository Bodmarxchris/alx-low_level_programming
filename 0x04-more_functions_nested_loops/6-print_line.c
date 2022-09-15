#include "main.h"

/**
 * print_line - print line using "_" character of n lenght
 * @n: lenght of line
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
