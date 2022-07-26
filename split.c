#include "shell.h"

/**
  * func_split - tokenize the line read
  * @line: line to be tokenize
  * Return: array of tokens
  */

char **func_split(char *line)
{
	int size = 64;
	int i = 0;
	char **tab_token = malloc(size * sizeof(char *));
	char *token;

	if (tab_token == NULL)
	{
		perror("Error : malloc");
		free(tab_token);
		free(line);
		exit(1);
	}

	token = strtok(line, " ");
	while (token != NULL)
	{
		tab_token[i] = token;
		i++;
		token = strtok(NULL, " ");
	}
	tab_token[i] = NULL;
	return (tab_token);
}
