#include "main.h"

int main(int argc, char **argv)
{

	char **tokens;
	char *token;
	int bytes = 0;
	int i = 0;
	char *line = NULL;
	size_t buf = 0;


	while (1)
	{
		tokens = malloc(sizeof(char *) * 50);
		write(1, "# ", 2);

		 bytes = getline(&line, &buf, stdin);
		 if (bytes == -1)
		 {
			 freepointer(tokens);
			 break;
		 }
		 i = 0;
		 token = strtok(line, " \n\t\r");
		 while (token != NULL)
		 {
			 tokens[i] = malloc(sizeof(char) * (strlen(token) + 1));
			 strcpy(tokens[i], token);
			 i++;
			 token = strtok(NULL, " \n\t\r");
		 }
		 tokens[i] = NULL;
		 if (tokens[0] == NULL)
		 {
			freepointer(tokens);
			continue;

		 }
		 if (strcmp(tokens[0], "exit") == 0)
		 {
			 freepointer(tokens);
			 break;

		 }

		 i = 0;
		 while (tokens[i])
		 {
			 write(1, tokens[i], strlen(tokens[i]));
			 write(1, "\n", 1);
			 i++;
		 }

		 freepointer(tokens);


	}
	free(line);

}
