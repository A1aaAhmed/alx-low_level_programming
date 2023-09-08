#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d ",n);
	int z=n%10;

	if (z>5){
	printf("and is greater than 5\n");
	}
	else if (z==0){
	prntf("and is 0\n");
	}
	else {
		printf("and is less than 6 and not 0\n");
	/* your code goes there */
	return (0);
}
