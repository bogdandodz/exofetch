#include <stddef.h>
#include <sys/types.h>
#include <sys/sysctl.h>
#include <stdlib.h>

char* kernelver() {
  void *kernel_ver = malloc(256);
  size_t size = 256;
  sysctlbyname("kern.osrelease", kernel_ver, &size, NULL, 0);

  return kernel_ver;
}
