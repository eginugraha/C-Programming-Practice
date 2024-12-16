#include <stdio.h> // Fungsi input output

// Fungsi sort array untuk menampilkan nilai tertinggi
void sort(int *array, int n) {
  int *ptr = array; // Inisialisasi untuk memasukan data ke dalam pointer

  // Lakukan perulangan sesuai jumlah element
  for (int i = 1; i < n; i++) {
    /**
     * Jika elemen dari perulangan lebih besar dari elemen pertama
     * maka update elemen pertama dengan data dari perulangan tersebut
     */
    if (*(array + i) > *ptr) {
      ptr = array + i;
    }
  }
  // Tampilkan nilai maksimum ke layar
  printf("%d", *ptr);
}

// Fungsi utama yang akan dijalankan oleh program
int main() {
  // Inisialisasi variable jumlah data dan array untuk menyimpan data
  int n = 5, array[n];

  // Menampilkan pesan awal program ke layar
  printf("Program nilai maksimum dari 5 data.\n");

  // Lakukan perulangan untuk melakukan input data
  for (int i = 0; i < n; i++) {
    // Mencetak perintah ke layar dan menerima input data
    printf("Masukkan data ke %d: ", i + 1);
    scanf("%d", &array[i]);
  }

  // Jalankan fungsi sort dengan passing parameters array dan jumlah element
  sort(array, n);

  // Mengembalikan 0 untuk menunjukan bahwa program telah selesai
  return 0;
}