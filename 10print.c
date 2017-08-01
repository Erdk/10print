#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  int i = 0;
  while(i++ < 6000) { 
    printf("%s", drand48() < 0.5 ? "\e[1;31m/\e[0m" : "\e[1;32m\\\e[0m");
    usleep(500);
    if (!(i % 80)) printf("\n");
  } 
}
