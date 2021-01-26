#include "header.h"

int cat( char *argv[] )
{
  int status;
  int i=0;
  char *args[3];
  args[0]="cat";
  args[1]=argv;
  args[2]=0;

  if( fork() == 0 ){
    execvp(argv[0], argv);
    //Open:
    int fd;
    fd = open(argv[1], O_RDWR|O_CREAT,0666);
    //Read:
    char buf[1024];
    int r;
    r = read(fd, buf, 1024);
    //Conversion ASCII :
    int caractere;
    for( int i=0; i<strlen(buf); i++){
      caractere = toAtoi(buf[i]);
      write(1, caractere, strlen(caractere) );
    }
  }
  else
    wait( &status );

  return 0;
}

//Conversion ACSII:
int toAtoi( char carac ){
  int x = (int)carac -48;
  return x;
}
