#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  char* user_name = username();
  printf("%s@", user_name);

  char* host_name = hostname();
  printf("%s\n", host_name);
  free(host_name);
}
