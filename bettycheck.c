#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - Prompts a user for input and capture with getline.
 *
 * Return: 0
 */
int main(void)
{
	size_t n = 3;
	char *buffer = NULL;
	pid_t pid;

	pid = getpid();
	printf("$: ");
	getline(&buffer, &n, stdin);
	printf("your name %sBuffer has size of %ld\n", buffer, n);
	printf("your pid is %u\n ", pid);

	free(buffer);

	return (0);
}
