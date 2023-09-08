#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int  ch;
	
	char a [16] = "0123456789abcdef";
	for (ch =0; ch <= 16; ch++)
	{
		putchar(a[ch]);
	}
	putchar('\n');
	return (0);
}
