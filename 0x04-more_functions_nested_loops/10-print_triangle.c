#include "main.h"

/**
 * print_triangle - draw triangle
 * @size : int
 * Return:void
 */

void print_triangle(int size)
{

	int i = 1, j;

	while (i <= size && size > 0)
	{
		for ( j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
