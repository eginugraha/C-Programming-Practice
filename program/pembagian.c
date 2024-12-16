#include <stdio.h> // Fungsi input output

// Fungsi utama yang dieksekusi saat program dijalankan
int main() {
  int a, b;     // Inisialisasi variable input
  float result; // Inisialisasi variable output

  // Mencetak pesan ke layar untuk melakukan input data
  printf("Enter two integers: ");

  // Kurang spesifikasi format "%d" untuk tipe data integer yang akan diterima
  // oleh program
  scanf("%d %d", &a, &b);

  /**
   * Melakukan check pembagian untuk angka 0
   * Jika variable "a" = 0 dan variable "b" = 0 akan menampilkan error NaN
   * Jika variable "a" > 0 atau "a" < 0 dan variable "b" = 0 akan menampilkan
   * error infinity
   */
  if (b == 0) {
    // Jika bilangan kedua adalah 0 maka tampilkan pesan error
    printf("Cannot be divided by zero.\n");
  } else {
    // Karena ekspektasi output dari hasil pembagian adalah float, maka agar
    // lebih presisi tipe data untuk variable "a" diubah menjadi float
    result = (float)a / b;

    // Menggunakan spesifikasi format "%.2f" untuk menampilkan hasil 2 digit
    // dibelakang koma
    printf("The division of %d and %d is %.2f\n", a, b, result);
  }

  // Mengembalikan 0 menunjukan bahwa program telah selesai
  return 0;
}