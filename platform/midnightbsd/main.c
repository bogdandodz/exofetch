#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  char* user_name = username();
  printf("%s@", user_name);

  char* host_name = hostname();
  printf("%s\n", host_name);
  free(host_name);

  char* kernel_ver = kernelver();
  printf ("%s\n", kernel_ver);
  free(kernel_ver);

  long up_time = uptime();
  printf ("Uptime: %ld\n", up_time); 
}
