#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign random number to variable n
 *
 * Description: assign random number to n
 * this program prints "Programming is positive, zero,or negative
 * Return: 0
*/
int main(void)
{
int n;
int i;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;

if (l > 5)
{
	printf("Last digit of %d is %d and is greater than $\n", n, l);
}
else if (l == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, l);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
}
return (0);
