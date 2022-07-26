#include "shell.h"

/**
  * _read - function that reads the stdin
  * Return: line if succesful or NULL if failed
  */

char *_read(void)
{
	char *line = NULL;
	size_t size = 0;
	ssize_t len = 0;

	len = getline(&line, &size, stdin);
	if (len == -1)
	{
		write(1, "\n", 1);
		free(line);
		return (NULL);
	}
	if (line[len - 1] == '\n' && line[1] != '\0')
		line[len - 1] = '\0';

	if (line[0] == '\0')
	{
		printf("ffffffffff");
		return (NULL);
	}
	return (line);
}
