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

		
		
		srand(time(0));	n = rand() - RAND_MAX / 2;											    		lastdigitofN = (n % 10);	                                                                                      
		if (lastdigitofN > 5)
			printf("and is greater than 5\n");
		}
		else if (lastdigitofN == 0)
		{
			printf("is %d", lastdigitofN);
			printf("and is 0\n");
		}
		else
		{ 
			printf("is %d ", lastdigitofN);
			printf("and is less than 6 and not 0\n" );
		}															
		return (0);
}
