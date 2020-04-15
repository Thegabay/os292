#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  memsize();
  void* ptr = malloc(sizeof(int));
  memsize();
  free(ptr);
  memsize();
  exit();
}