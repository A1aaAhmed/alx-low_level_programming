#include "main.h"

/**
 * times_table - prints times table
 * Return:void
 */

void times_table(void)
{

int i;
int j;
int res;

for (i = 0; i < 10; i++)
{
	for (j = 0; j < 10; j++)
	{
		if (res < 10)
		{
			_putchar(' ');
			_putchar('0' + res);
		}
		else
		{
			_putchar('0' + rep / 10);
			_putchar('0' + rep % 10);
		}

		if (j < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		
	}
}
}

