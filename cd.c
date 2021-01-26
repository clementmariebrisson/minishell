#include "header.h"

int cd( char *argv[] )
{
  int returnValue = 0;
  int status;

  if ( fork() == 0 ){
      return chdir(argv[1]); // child: call execv with the path and the args
  }

  else{
      wait( &status );        // parent: wait for the child (not really necessary)
  }

  return 0;

}
