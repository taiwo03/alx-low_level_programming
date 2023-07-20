#include "main.h"

/**
 * positive_or_negative - check the number stored in the variable
 * Return: 0
 */

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%i is positive\n", n);

	else if (n < 0)
		printf("%i is negative\n", n);

	else
		printf("%i is zero\n", n);

	return (0);

}
