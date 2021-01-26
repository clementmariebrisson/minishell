#include "header.h"

int rm( char *argv[] )
{
  int returnValue = 0;
  int status;
  char *args[2];
  args[0] = "rm";        // first arg is the full path to the executable
  args[1] = argv[1];
  args[2] = 0;             // list of args must be NULL terminated

  if ( fork() == 0 ){
    //execvp(argv[0], argv);
    /*
    char buf[1024]={0};
    int cpt =0;
    for(int i=0; i<strlen(argv[1]); i++){
      buf[i] = argv[1][i];
      if( strcmp(&buf[i],"/")==0 ){
        cpt++;
      }
    }
    char *path;
    for (int i=0; i<cpt; i++){
      path = strtok(argv[1], "/");
      printf("%s\n",path );
    }
    printf("\n");
    */
    remove(argv[1]);
  }

  else{
      wait( &status );        // parent: wait for the child (not really necessary)
  }

  return 0;

}
