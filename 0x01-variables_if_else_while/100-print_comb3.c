#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{	char i = '0';
	char j = '1';
	for (; i <= '8'; i++){
		for (; j <='9'; j++){
			if (i !=  j){
				putchar(i);
				putchar(j);}
			if (i != '8' && j != '9'){
				putchar(" ");
				putchar(",");
			}
		}
	}
	putchar('\n');
	return (0);
}
