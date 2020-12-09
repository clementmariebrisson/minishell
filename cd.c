#include "header.h"

int cd( char *argv[] )
{
  int returnValue = 0;
  int status;
  char *args[2];
  args[0] = "cd";        // first arg is the full path to the executable
  args[1] = argv[1];
  args[2] = 0;             // list of args must be NULL terminated

  if ( fork() == 0 ){
      return chdir(args[1]); // child: call execv with the path and the args
  }

  else{
      wait( &status );        // parent: wait for the child (not really necessary)
  }

  return 0;

}
