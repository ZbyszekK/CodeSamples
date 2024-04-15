//
// Small program to allocate and play with cgroup memory limitation settings
//
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

// How fast to allocate
#define STEP 100*1024*1024 // 100 MB / s

int main(int argc, char** argv) {
  
  srand(time(NULL));

  printf("Press enter to start allocate \n");
  (void) getchar();

  while (1) {
    // Need to write something to allocated pages
    void* memory = malloc(STEP);
    int r = rand();
    memset(memory, r, STEP);
    sleep(1);
  }

  return 0;
}
