#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return:void
 */

void jack_bauer(void)
{

int d1;
int d2;
int d3;
int d4;


for (d1 = 0; d1 < 3; d1++)
{
	for (d2 = 0; d2 < 4; d2++)
	{
		for (d3 = 0; d3 < 6; d3++)
		{
			for (d4 = 0; d4 < 10; d4++)
			{
				_putchar('0' + d1);
				_putchar('0' + d2);
				_putchar(':');
				_putchar('0' + d3);
				_putchar('0' + d4);
				_putchar('\n');
			}
		}
	}
}

}
