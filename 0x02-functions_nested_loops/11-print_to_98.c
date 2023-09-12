#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @n : input
 * Return:void
 */

void print_to_98(int n)
{

for  (; n < 98; n++)
{
	printf("%i, ", n);
}
for  (; n > 98; n--)
{
	printf("%i, ", n);
}

printf("98");
putchar('\n');
}
