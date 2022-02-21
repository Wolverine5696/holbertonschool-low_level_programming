#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 * main - program that adds 2 numbers
 * @argc: arguments added together to get answer
 * @argv: string of arrays to arguments
 *
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int sum = 0;

	if (argc == 1)
	{/* if no answer present */
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
