#include "header.h"

int env( char *argv[] )
{
  int status;
  if( fork() == 0 ){
    execvp(argv[0], argv);
  }
  else
    wait( &status );
  return 0;
}
