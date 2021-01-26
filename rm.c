#include "header.h"

int rm( char *argv[] )
{
  int returnValue = 0;
  int status;

  if ( fork() == 0 ){
    remove(argv[1]);
  }

  else{
      wait( &status );        // parent: wait for the child (not really necessary)
  }

  return 0;

}
