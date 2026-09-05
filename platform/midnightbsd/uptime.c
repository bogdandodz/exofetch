#include <stdint.h>
#include <sys/time.h>

#include "main.h"

long uptime() {
  struct timespec ts;

  clock_gettime(CLOCK_UPTIME_FAST, &ts);
  long seconds = ts.tv_sec;
  long minutes = seconds / 60;
  return minutes;  
}
