#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: o
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	
	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}
	rintf("After execve\n");
	return (0);
}
