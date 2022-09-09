#include <stdio.h>

/**
 * main - print the sizes in function
 *
 * Description: using the main function
 * this program prints sizes of datatypes
 * Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %1d byte(s)\n", sizeof(c)):
	printf("Sizes of an int: %1d bytes(s)\n", sizeof(i));
	printf("Size of a long int: %1d byte(s)\n", sizeof(li));
	printf("sizeof a long long int: %1d byte(s)\n", sizeof(lli));
	printf("Sizes of a float: %1d byte(s)\n", sizeof(f));
	return (0);
}
