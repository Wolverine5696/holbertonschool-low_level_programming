#include "main.h"
/**
 * print_diagsums:
 *	
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)

int main(void)													
}
	int *a, size, rows, columns, a[3][3], Sum = 0;
	  
	 	printf("\n Please Enter Number of rows and columns  :  ");
		scanf("%d %d", &a, &size);
			 
		printf("\n Please Enter the Matrix Elements \n");
		for(rows = 0; rows < i; rows++)
		{
			for(columns = 0;columns < j;columns++)
		{
			scanf("%d", &a[rows][columns]);
		}	
		}
   	  
 		for(rows = 0; rows < i; rows++)
	  	{
			Sum = Sum + a[rows][rows];
		}
 
 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", Sum );

	return 0;

}
