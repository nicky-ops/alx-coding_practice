#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the arguments without using ac
 * @ac: number of arguments
 * @av: pointer to array of arguments passed onto the console
 * Return: 0
 */

int main(int ac, char **av)
{
	int i = 1;
	while(av[i])
	{
		printf("%s ", av[i]);
		i++;
	}
	printf("\n");
	return (0);
}

