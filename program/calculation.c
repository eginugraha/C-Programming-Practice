#include <stdio.h> // Fungsi input dan output

// Fungsi utama yang dieksekusi saat program dijalankan
int main() {
  int x, y, z, result; // Inisialisasi variable

  // Melakukan input data bilangan
  printf("Please enter three integer:\n");
  scanf("%d %d %d", &x, &y, &z);

  // Perhitungan untuk total penjumlahan
  result = x + y + z;

  // Mencetak hasil ke layar
  printf("The product is: %d", result);

  // Mengembalikan 0 untuk menunjukan bahwa program telah selesai
  return 0;
}