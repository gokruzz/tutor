#include "main.h"

void freepointer(char **tokens)
{

	int i = 0;
	while (tokens[i])
	{
		free(tokens[i]);
		i++;
	}
	free(tokens);


}
