#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - splits a string and returns an array of each word of the,
 * string.
 * Return: array of each word of the string
 */
int main()
{
	char *buffer = malloc(1024);
	size_t len = 1024;
	char *token;
	ssize_t n;

	while (buffer)
	{
		printf("$ ");
		n = getline(&buffer, &len, stdin);
		printf("%ld\n", n);
		printf("buffer line: %s\n", buffer);

		token = strtok(buffer, " ");
		while (token)
		{
			printf("buffer strtok: %s\n", token);
			token = strtok(NULL, " ");
		}
	}
	return (0);
}
