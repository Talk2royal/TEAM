#include "main.h"

/**
 *
 *
 *
 */

void free_arg(char **arg, int *count)
{
	int i;

	i = 0;
	while (i < *count - 1)
	{
		free(arg[i]);
		i++;
	}
	free(arg);
	free(temp);
}
