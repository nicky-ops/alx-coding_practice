#include <stdio.h>
#include <unistd.h>

/**
 * main - gets PID
 * Return: 0 always.
 */

int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("%u\n", my_pid);
	return (0);
}

