#include "main.h"
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
char c[9] = "_putchar";
int i;

for (i = 0; i < 8; i++)
{
	_putchar(c[i]);
}
_putchar('\n');
return (0);
}
