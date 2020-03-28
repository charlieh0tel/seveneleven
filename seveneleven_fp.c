#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  // I am not a floating point expert.  This may be wrong in all sorts
  // of subtle ways.  It happens to work here.
  for (double a = 0.01; a < 7.11; a += 0.01) {
    for (double b = 0.01; b < 7.11; b += 0.01) {
      for (double c = 0.01; c < 7.11; c += 0.01) {
	for (double d = 0.01; d < 7.11; d += 0.01) {
	  int product_cents = a * b * c * d * 100.0;
	  int sum_cents = (a + b + c + d) * 100.0;
	  if (product_cents == 711 && sum_cents == 711) {
	    printf("a=%.2f, b=%.2f, c=%.2f, d=%.2f\n", a, b, c, d);
	    exit(0);
	  }
	}
      }
    }
  }	   
  exit(1);
}

/* Local Variables: */
/* compile-command: "clang -o seveneleven_fp -Wall -O3 seveneleven_fp.c" */
/* End: */
