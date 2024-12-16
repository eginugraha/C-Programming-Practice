#include <stdio.h> // Fungsi input dan output

// Fungsi utama yang dieksekusi saat program dijalankan
int main() {
  int x = 5, y = 8;

  printf("Soal A:\n");
  if (y == 8) {
    if (x == 5) {
      puts("@@@@");
    } else {
      puts("####");
    }
    puts("$$$$");
    puts("&&&&");
  }

  printf("Soal B:\n");
  if (y == 8) {
    if (x == 5) {
      puts("@@@@");
    } else {
      puts("####");
      puts("$$$$");
      puts("&&&&");
    }
  }

  printf("Soal C:\n");
  if (y == 8) {
    if (x == 5) {
      puts("@@@@");
    } else {
      puts("####");
      puts("$$$$");
    }
    puts("&&&&");
  }

  // Mengembalikan 0 untuk menunjukan bahwa program telah selesai
  return 0;
}