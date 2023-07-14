#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * *main - Entry point
 * Decription: 'get the last digiti of a number'
 * Return: always 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("l d of %d is %d and  greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("la di of %d is %d and equal 0\n", n, ld);
	}
	else if (ld < 6 && ld != 0)
	{
		printf("lat dit of %d is %d and less than 6 and not 0\n", n, ld);
	}
	return (0);
}
