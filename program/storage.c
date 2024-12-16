#include <stdio.h>

int main() {
  int num = 100;
  char ch = 'P';
  double bigNum = 10000.29;

  // Menampilkan ukuran storage
  printf("Storage size of num is: %zu bytes\n", sizeof(num));
  printf("Storage size of ch is: %zu bytes\n", sizeof(ch));
  printf("Storage size of bigNum is: %zu bytes", sizeof(bigNum));
  
  return 0;
}