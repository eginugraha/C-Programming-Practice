#include <stdio.h> // Fungsi input output

// Fungsi utama yang akan dijalankan oleh program
int main() {
  int sum = 0, count = 0; // Inisialisasi variable sum untuk total dan count
                          // untuk jumlah perulangan
  float average, grade;   // Inisialisasi variable avarage untuk hasil rata-rata
                          // dan grade untuk input nilai

  // Mencetak perintah ke layar untuk memasukan nilai dan berhenti ketika input
  // -1
  printf("Masukkan nilai (masukkan -1 untuk selesai):\n");

  // Lakukan perulangan untuk memasukkan nilai
  while (1) {
    printf("Nilai: ");
    scanf("%f", &grade);

    // Menghentikan perulangan jika memasukan nilai -1
    if (grade == -1) {
      break;
    }

    sum += grade;
    count++;
  }

  if (count == 0) {
    // Tampilkan pesan ke layar jika hasil 0
    printf("Tidak ada nilai yang dimasukkan.\n");
  } else {
    // Lakukan perhitungan dan tampilkan ke layar untuk hasil rata-rata
    average = sum / (float)count;
    printf("Nilai rata-rata adalah: %.2f\n", average);
  }

  // Mengembalikan 0 untuk menunjukan bahwa program telah selesai
  return 0;
}