#include "shell.h"

/**
 * trim - function that trim string
 * @str: String to trim
 * Return: Char
 */
char *trim(char *str)
{
	char *front = str;
	char *end = NULL;
	int len = 0;

	if (str == NULL)
		return (NULL);
	if (str[0] == '\0')
		return (str);

	len = _strlen(str);
	end = str + len;

	while (*front == ' ')
		front++;

	if (end != front)
	{
		while (*end == ' ' && end != front)
			end--;
	}
	if (front != str && end == front)
		*str = '\0';
	else if (str + len - 1 != end)
		*(end + 1) = '\0';
	end = str;
	if (front != str)
	{
		while (*front)
			*end++ = *front++;
		*end = '\0';
	}

	return (str);
}
