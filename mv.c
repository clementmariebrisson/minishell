#include "header.h"

int mv( char *argv[] )
{
  int returnValue = 0;
  int status;
  char *args[2];
  args[0] = "mv";        // first arg is the full path to the executable
  args[1] = argv[1];
  args[2] = 0;             // list of args must be NULL terminated

  if ( fork() == 0 ){
      //execvp(argv[0], argv); // child: call execv with the path and the args
      if ( argv[2] == NULL ) {
        printf( "Usage: sample oldname newname...\n" );
        exit( 0 );
    }
      int returnCode = rename( argv[1], argv[2] );
    if ( returnCode != 0 ) {
        fprintf( stderr, "Error: cannot rename the file.\n" );
    }
  }

  else{
      wait( &status );        // parent: wait for the child (not really necessary)
  }

  return 0;

}
