#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int c = '0';

	while (c < '11')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
