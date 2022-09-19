include "main.h"

/** _strcpy - copies string to a given memory location
 * @dest: where the string needs to be copied
 * @scr: where the string is initialy
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(scr + len);
		len++;
	}
	*(dest + len) = *(scr + len);

	return (dest);
}
