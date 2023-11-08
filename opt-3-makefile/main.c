#include <stdio.h>

#include "foo.h"
#include "bar.h"

int main()
{
  foo();
  int b = bar();
  printf("%d\n", b);

  return 0;
}
