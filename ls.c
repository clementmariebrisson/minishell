#include "header.h"
#include <dirent.h>
int ls( char *argumentsList[] )
{
  int status;
  char *argv[2];
  argv[0]="ls";
  argv[1]= NULL;

  int i=0;
  int n;
  if( fork() == 0 ){

    struct dirent **namelist;
    n=scandir(".",&namelist,NULL,alphasort);

    while( n ){
      n--;
      printf("%s\t", namelist[n]->d_name);
      free(namelist[n]);
    }
    printf("\n" );
  }
  else
    wait( &status );

  return 0;
}

/*
int ls( char *argumentsList[] )
{
  int status;
  char *argv[2];
  argv[0]="ls";
  argv[1]= NULL;

  if( fork() == 0 )
    execvp(argv[0], argv);
  else
    wait( &status );

  return 0;
}
*/
