#include <stdio.h>
#include <stdlib.h>

int main() { 
  while(1) { printf("%s", drand48() < 0.5 ? "\e[1;31m/\e[0m" : "\e[1;32m\\\e[0m"); } 
}
