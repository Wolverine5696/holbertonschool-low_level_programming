#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0
 *
 */
int main(void)
{
		int lastdigitofN;
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		lastdigitofN = (n % 10);
		printf("Last digit of %d ", n);
		if (lastdigitofN > 5)
		{
			printf("is %d ", lastdigitofN);
			printf("and is greater than 5 \n");
		}
		if (lastdigitofN == 0)
		{
			printf("is %d ", lastdigitofN);
			printf("and is 0 \n");
		}
		if (lastdigitofN < 6 && n != 0)
		{
			printf("is %d ", lastdigitofN);
			printf("and is less 6 and not 0 \n");
		}
		return (0);
}
