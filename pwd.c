#include "header.h"

int pwd( char *argv[] )
{
  printf("%s\n", getenv("PWD") );

  return 0;
}
