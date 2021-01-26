#include "header.h"

int mv( char *argv[] )
{
  int returnValue = 0;
  int status;

  if ( fork() == 0 ){
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
