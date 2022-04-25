#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse the content of a arrzy of integer
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j > 0; j--)
		{
			temp = *(a +(j - 1));
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
