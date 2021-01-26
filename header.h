#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <dirent.h> //Pour ls.c

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void lireCaractere();

int ls( char *argumentsList[] );
int argsLs ( char *argumentsList[], int diff_strcmp );
char firstCharacter(char * fileName);

int cd( char *argumentsList[] );
int echo( char *argumentsList[] );

int pwd( char *argv[] );

int env( char *argv[] );

int toAtoi( char carac );
int cat( char *argv[] );

int rm( char *argv[] );

int touch( char *argv[] );

int mv( char *argv[] );
