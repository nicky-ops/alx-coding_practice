#include <stdio.h>
#include <unistd.h>

/**
 * main - gets parent PID
 * Return: void
 */

int main()
{
	pid_t ppid;

	ppid = getppid();
	printf("%u\n", ppid);
	return (0);
}
