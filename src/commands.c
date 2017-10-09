#include <string.h>
#include <unistd.h>
#include <stdio.h>

#include "commands.h"

int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;
	if(chdir(argv[1])!= 0) return -1;
  // TODO: Fill it!
  return 0;
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;
	char dir[255];
	if(getcwd(dir,255)==NULL) return -1;
	printf("%s\n",dir);
  // TODO: Fill it!

  return 0;
}

int validate_cd_argv(int argc, char** argv) {
  // TODO: Fill it!
	if (argc != 2) return 0;
	else if (strcmp(argv[0],"cd") != 0) return 0;
  return 1;
}

int validate_pwd_argv(int argc, char** argv) {
  // TODO: Fill it!
	if(argc != 1) return 0;
	else if(strcmp(argv[0],"pwd")!=0) return 0;
	
  return 1;
}
