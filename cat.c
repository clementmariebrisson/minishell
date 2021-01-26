#include "header.h"

int cat( char *argv[] )
{
  int status;
  int i=0;

  if( fork() == 0 ){
    //execvp(argv[0], argv);
    //Open:
    int fd;
    fd = open(argv[1], O_RDWR|O_CREAT,0666);
    //Read:
    char buf[4096]={0};
    int r;
    r = read(fd, buf, 4096);
    //Conversion ASCII :
    int caractere;
    char carac;
    for( int i=0; i<strlen(buf); i++){
      //caractere = toAtoi(buf[i]);
      carac = buf[i];
      write(1, &carac, strlen(&carac) );
      //printf("%c", carac);
    }
    printf("\n");
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
