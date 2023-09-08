#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
  * Return: 0
 */
int main(void)
{
	int c;
	int d;
	int e = '0';

	while (e <= '9')
	{
		d = '0';
		while (d <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar(e);
					putchar(d);
					putchar(c);

					if (c + d + e != '9' + '8' + '7')
					{
						putchar(',');
						putchar(' ');
					}
				}

				c++;
			}
			d++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}

