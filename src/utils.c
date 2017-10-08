#include "utils.h"
#include <stdlib.h>
#include <string.h>

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  // TODO: Fill this!
	char *str,*tok;
	int i = 0;

	str = (char*)malloc(strlen(command)+1);
	*argv = (char**)malloc(i * sizeof(char**));

	strcpy(str,command);
	tok = strtok(str," \t\n\r");
	
	while(1)
	{
		if(tok == NULL) break;
		*argv = (char**)realloc(*argv, (i+1)*sizeof(char**));
		*(*argv+i) = (char*)malloc(strlen(tok)+1);
		strcpy(*(*argv+i++),tok);
		tok = strtok(NULL," \t\n\r");
	}
	*argc = i;
}
