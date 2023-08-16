#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given a parameter
 * on each element of an array
 * @size: size of the array
 * @action: pointer to the function used
 * @array: array to iterate over
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
