#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: pointer to a
 * @n: number of elements in array
 * Return:
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];

		a[end] = temp;

		start++;
		end--;
	}
}
