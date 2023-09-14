#include "main.h"

/**
 * print_square - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */

void print_square(int n)
{

	int j, i = 0;

	while (i < n && n > 0)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	{
}
