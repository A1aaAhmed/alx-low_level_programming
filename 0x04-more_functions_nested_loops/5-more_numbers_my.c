#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return:void
 */

void print_most_numbers(void)
{
	char c, x;
	int i;


	for (i = 0; i < 10; i++)
	{
		for (c = '0'; c <= '9' + 5; c++)
		{
			if (c > '9')
			{
				_putchar('1');
				x = c - 10;
			}
			else
			{
				x = c;
			}
			_putchar(x);

		}
		_putchar('\n');
	}

}
