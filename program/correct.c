#include <stdio.h>

int main() {
  int number = 3;
  float num;
  int a = 3, b = 4, c = 5;
  int sum;
  char x = 'X', y = 'Y', z = 'Z';

  printf("The value is %d", number);

  scanf("%f", &num);

  sum = a + b + c;
  printf("The sum of %c and %c is %c \n", x, y, z);

  return 0;
}