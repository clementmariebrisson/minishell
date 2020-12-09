#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void lireCaractere();

int ls( char *argumentsList[] );
int cd( char *argumentsList[] );
int echo( char *argumentsList[] );
