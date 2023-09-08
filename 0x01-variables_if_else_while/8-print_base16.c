#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int ch;
	char a[16] = "0123456789abcdef";

	for (ch = 0; ch < 16; ch++)
	{
		putchar(a[ch]);
	}
	putchar('\n');
	return (0);
}
