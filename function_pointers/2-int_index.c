#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 *
 * @array: int pointer
 *
 * @size: int
 *
 * @cmp: function pointer
 *
 * Return: -1. if size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)

			if (cmp(array[i]))

			return (i);
	}
	return (-1);
}
