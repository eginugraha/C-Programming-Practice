#include <stdio.h>

int main() {
  int sum, sum2, sum3, A = 1, B = 2;

  sum = 100 + 200 / 10 - 3 * 10;
  printf("Soal 1: %d \n", sum);

  sum2 = 5 ^ 2 % 4 * 3;
  printf("Soal 2: %d \n", sum2);

  sum3 = A > B ? B : A;
  printf("Soal 3: %d \n", sum3);

  return 0;
}