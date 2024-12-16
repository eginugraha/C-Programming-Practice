#include <stdio.h> // Fungsi input dan output

float element[2] = {1, 1}; // Inisialisasi variable input
float *ptr = element;      // Inisialisasi pointer
float result;              // Inisialisasi variable hasil

void insertWeight() {
  // Lakukan perulangan input jika berat <= 0
  do {
    if (*ptr <= 0) {
      printf("Berat badan tidak boleh <= 0\n");
    }
    printf("Masukkan berat anda (kg):\n");
    scanf("%f", ptr);
  } while (*ptr <= 0);
}

void insertHeight() {
  // Lakukan perulangan input jika tinggi <= 0
  do {
    if (*(ptr + 1) <= 0) {
      printf("Tinggi badan tidak boleh <= 0\n");
    }
    printf("Masukkan tinggi anda (m):\n");
    scanf("%f", ptr + 1);
  } while (*(ptr + 1) <= 0);
}

// Fungsi utama yang dieksekusi saat program dijalankan
int main() {
  insertWeight(); // Jalankan fungsi masukkan berat badan
  insertHeight(); // Jalankan fungsi masukkan tinggi badan

  // Melakukan perhitungan dan mencetak hasil nya ke layar
  result = *ptr / (*(ptr + 1) * *(ptr + 1));
  printf("Hasil BMI anda: %.2f\n", result);

  // Mencetak hasil BMI
  if (result < 18.5) {
    printf("Kategori: Underweight\n");
  } else if (result < 25) {
    printf("Kategori: Normal\n");
  } else if (result < 30) {
    printf("Kategori: Overweight\n");
  } else {
    printf("Kategori: Obese\n");
  }

  // Mengembalikan 0 untuk menunjukan bahwa program telah selesai
  return 0;
}