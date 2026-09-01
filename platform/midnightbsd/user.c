#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
#include <sys/param.h>
#include <stdlib.h>

#include "main.h"

char* username() {
  uid_t uid = getuid();
  struct passwd *pw = getpwuid(uid);

  return pw->pw_name;
}

char* hostname() {
  void *host_name = malloc(MAXHOSTNAMELEN);
  gethostname(host_name, sizeof(MAXHOSTNAMELEN));
  
  return host_name;
}
