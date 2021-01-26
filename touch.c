#include "header.h"

int touch( char *argv[] )
{
  int returnValue = 0;
  int status;

  if ( fork() == 0 ){
    int fd;
    fd = open(argv[1], O_WRONLY | O_CREAT, DEFFILEMODE);
    }

  else{
      wait( &status );        // parent: wait for the child (not really necessary)
  }

  return 0;

}
