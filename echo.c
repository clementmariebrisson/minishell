#include "header.h"

int echo( char *argv[] )
{
  int status;
  int i=0;

  if( fork() == 0 ){
    //execvp(argv[0], argv);
    for (int i = 1; i<strlen(*argv); i++){
        write(1, argv[i], strlen(argv[i]) );
        write(1, " ", 1);
    }
    printf("\n");
  }
  else
    wait( &status );

  return 0;
}
