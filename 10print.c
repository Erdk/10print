#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[]) {
  int i = 10;
  while(1) {
    double r = drand48();
    if (r < 0.25) printf("/");
    else if (r < 0.5) printf("\\");
    else if (r < 0.75) printf("|");
    else printf("-");
  } 
  
  return 0; 
}
