#include "header.h"

int other( char *argv[] )
{
  int returnValue = 0;
  int status;
  int returnCode;
  if ( fork() == 0 ){
    returnCode = execvp(argv[0], argv);
    }
    if (returnCode != 0){
        fprintf(stderr, "Error : command not found.\n");
    }

  else{
      wait( &status );        // parent: wait for the child (not really necessary)
  }

  return 0;

}
