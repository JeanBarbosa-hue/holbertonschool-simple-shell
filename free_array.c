#include "shell.h"

/**
 * free_array - free a 2D array of strings and its contents
 *
 * @token: the 2D array of strings to free
 */

void free_array(char **token)
{
	int i = 0;

	while (token)
	{
		free(token[i]);
		i++;
	}
	free(token);
}
