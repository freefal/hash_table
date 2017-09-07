#include <math.h>

#include "prime.h"

int is_prime(const int x) {
  if (x < 2) { return  -1; }
  if (x < 4) { return 1;}
  if ((x % 2) == 0) { return 0; }
  int i;
  int max = floor(sqrt((double) x)); 
  for (i = 3; i <= max; i += 2) {
    if ((x % i) == 0) {
      return 0;
    }
  }
  return 1;
}

int next_prime(int x) {
  while (is_prime(x) != 1) {
    x++;
  }
  return x;
}
