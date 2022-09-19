#include "main.h"

/**
 * _strcpy - copies string to a given memory location
 * @dest: where the string needs to be copied
 * @src: where the string is initialy
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
