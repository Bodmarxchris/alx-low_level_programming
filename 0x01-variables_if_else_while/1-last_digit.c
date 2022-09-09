#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assing random number to variable n
 *
 * Description: assign random number to n
 * this program assign random numbers to n
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
	printf("last digit of %d is %d and is greater than $\n", n, l);
}
else if (l == 0)
{
	printf("last digit of %d is %d and is 0\n", n, l);
}
else
{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, l);
}
return (0);
