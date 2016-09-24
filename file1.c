#include <stdio.h>
#include "_cgo_export.h"

int CFunction() {
  char str[] = "Hello World from CFunction!";
  printf("CFunction says: %s\n", str);
  GoFunction();
  return 0;
}
