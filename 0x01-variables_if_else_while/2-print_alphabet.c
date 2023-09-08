#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	for (; c <= 'z';)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
