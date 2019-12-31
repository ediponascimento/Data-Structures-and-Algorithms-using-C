#include <stdio.h>

void fact(int n) {
  if (n > 0) {
    printf("%d ", n);
    fact(n - 1);
  } 
}

int main() {
  int x = 3;
  fact(x);
}