#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to the variable n each time it is executed.
 *
 * Return: 0
 */

int main(void)

{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (l > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, l);
	else if (l == 0)
		printf("Last digit of %i is %i and is 0\n", n, l);
	else if (l < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l);

	return (0);
}
