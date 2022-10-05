#include "search_algos.h"

/**
 * binary_search - binary search implementation
 * @array: string
 * @size: size_t
 * @value: value
 * Return: int, index of the value
 */

int binary_search(int *array, size_t size, int value)
{
size_t i;
int left = 0;
int right = size;
int middle;
if (array == NULL)
	return (-1);

for (i = 0; left < right; i++)
{
	printf("Searching in array: ");
	print_array(array, left, right);
	middle = (left + right) / 2;

	if (array[middle] < value)
		left = middle + 1;
	else if (array[middle] > value)
		right = middle;
	else
		return (middle);
}
return (-1);
}


/**
 * print_array - print `n` elements of an array of integers
 * @a: int array pointer to print
 * @i: int, start index
 * @j: int, end index
 * Description: Numbers must be separated by comma and space.
 * Numbers should be displayed in the same order they are stored in array.
 * You can only use _putchar to print.
 */

void print_array(int *a, int i, int j)
{

	for (; i < j; i++)
	{
		printf("%d", a[i]);
		if (i < j - 1)
			printf(", ");
	}
	printf("\n");
}
