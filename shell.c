#include "header.h"

int main(int argc, char *argv[]) {
  char command[50];
  char *whichCommand[50];
  char *argumentsList[100];
  char *ptr;
  char s[100];
  int argumentNumber = 0;

  while(1)
  {
    argumentNumber = 0;
    printf("%s",getenv("USER") );
    printf("@%s:", getenv("NAME") );
    printf("~%s$ ", getcwd(s, 100));

    lireCaractere(command);

    int size = strlen(command);
    ptr = strtok(command, " ");
    whichCommand[0] = ptr;
    while ( ptr != NULL)
    {
      argumentsList[argumentNumber] = ptr;
      int i=0;
      while( argumentsList[argumentNumber][i] != NULL )
      {
        if ( argumentsList[argumentNumber][i] == '\n' )
        {
          argumentsList[argumentNumber][i] = NULL;
        }
        i++;
      }
      argumentNumber++;
      ptr = strtok(NULL, " ");
    }
    argumentsList[argumentNumber] = NULL;

    if( strcmp(whichCommand[0],"ls")==0 ){
      ls(argumentsList);
    }
    else if( strcmp(whichCommand[0],"cd")==0 ){
      if( cd(argumentsList)==-1 ){
        printf("No such file or directory found.\n" );
      }
    }
    else if( strcmp(whichCommand[0],"echo")==0 ){
      echo(argumentsList);
    }
    else
    {
      printf("Command not found\n" );
    }

  }

  return 0;
}

void lireCaractere( char command[]){
    fgets(command,50,stdin);
}