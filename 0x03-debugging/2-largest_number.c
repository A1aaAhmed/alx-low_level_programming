#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: input1
 * @b: input2
 * @c: input3
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int max;

if (a > b && a > c)
{
	max = a;
}
else if (b > c && b > a)
{
	max = b;
}
else if (c > b)
{
	max = c;
}
else
{
	max = b;
}

return (max);
}
