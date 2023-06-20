#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main- main function to generate random number
 *
 * Return:Always 0 (success)
 *
 */

int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is ", n);
	a = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, a);
	}
	else
	{
		printf("Last digit of %d is %d and 0\n", n, a);
	}
	return (0);
}
