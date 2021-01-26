#include "header.h"

int touch( char *argv[] )
{
  int returnValue = 0;
  int status;
  char *args[2];
  args[0] = "touch";        // first arg is the full path to the executable
  args[1] = argv[1];
  args[2] = 0;             // list of args must be NULL terminated

  if ( fork() == 0 ){
    int fd;
    fd = open(argv[1], O_WRONLY | O_CREAT, DEFFILEMODE);
    }

  else{
      wait( &status );        // parent: wait for the child (not really necessary)
  }

  return 0;

}
