#include <stdio.h> // Fungsi input dan output

// Fungsi utama yang dieksekusi saat program dijalankan
int main() {
  int a, b, x, sum, z = 6; // Inisialisasi variable

  // Melakukan input data bilangan
  printf("Masukkan bilangan a, b dan x: ");
  scanf("%d %d %d", &a, &b, &x);

  // Melakukan perhitungan persamaan
  sum = (a * (x * x * x)) - (b * (x * x)) - z; // y = ax3 − bx2 − z

  // Mencetak hasil ke layar
  printf("Hasil dari perhitungan adalah: %d", sum);

  // Mengembalikan 0 untuk menunjukan bahwa program telah selesai
  return 0;
}