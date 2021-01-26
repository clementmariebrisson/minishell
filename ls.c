#include "header.h"

int ls( char *argumentsList[] )
{
  int status;
  char *argv[2];
  argv[0]="ls";
  argv[1]= NULL;


  if( fork() == 0 ){
    int diff_strcmp=20;

    //Lorsque cette partie est décommentée, il faut mettre un espace devant ls pour que le pgm fonctionne
    /*if ( ( strcmp(argumentsList[1],"-a")==0 ) || (strcmp(argumentsList[1],"--all") )==0 ) {
      diff_strcmp=0;
    }*/
    argsLs(argumentsList, diff_strcmp);
  }
  else
    wait( &status );

  return 0;
}

int argsLs ( char *argumentsList[], int diff_strcmp )
{
  int n;
  struct dirent **namelist;
  n=scandir(".",&namelist,NULL,alphasort);
  char *fileName;

  while( n ){
    n--;
    fileName =namelist[n]->d_name;

    char c = firstCharacter(fileName);
    char *pFileName = &c;
    if( (strcmp(pFileName,".") >= diff_strcmp) ){
      printf("%s\t", namelist[n]->d_name);
    }
    free(namelist[n]);
  }
  printf("\n" );
  return 0;
}
char firstCharacter(char * fileName)
{
  char name[30]={0};
  for(int i=0; i<30; i++){
    name[i]=*(fileName+i);
  }
  return name[0];
}
