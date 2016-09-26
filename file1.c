#include <stdio.h>
#include "_cgo_export.h"

int CFunction() {
  char message[] = "Hello World from CFunction!";
  printf("CFunction says: %s\n", message);
  GoFunction(message);
  return 0;
}
