#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  for (int a = 1; a < 711; ++a) {
    for (int b = a; b < 711; ++b) {
      for (int c = b; c < 711; ++c) {
        for (int d = c; d < 711; ++d) {
          if ((a * b * c * d == 711 * 100 * 100 * 100) &&
              (a + b + c + d == 711)) {
            printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
            exit(0);
          }
        }
      }
    }
  }        
  exit(1);
}

/* Local Variables: */
/* compile-command: "clang -o seveneleven -Wall -O3 seveneleven.c" */
/* End: */
