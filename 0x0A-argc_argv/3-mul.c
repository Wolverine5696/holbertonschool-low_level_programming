#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the multiplication answer on a new line
 * @argc: argc = answer
 * @argv: argv * argv
 *
 * Return: (1)
 */
int main(int argc, char *argv[])
{
	int answer;
		if (argc == 3)
		{	answer = atoi(argv[1]) * atoi(argv[2]);
				printf("%d\n", answer);
				return (0);
		}
		else
		{
			printf("Error\n");
			return (1);
		}

}
