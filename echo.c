#include "header.h"

int echo( char *argv[] )
{
  int status;
  int i=0;
  char *args[3];
  args[0]="echo";
  args[1]=args[1];
  args[2]=0;

  if( fork() == 0 )
    execvp(argv[0], argv);
  else
    wait( &status );

  return 0;
}
