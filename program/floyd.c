#include <stdio.h> // Fungsi input output

// Fungsi utama yang akan dijalankan oleh program
int main() {
  int rows;  // Inisialisasi variable untuk jumlah baris yang diinginkan
  int n = 1; // Inisilasissi variable untuk angka yang ingin ditampilkan

  // Mencetak pesan ke layar untuk perintah input dan untuk melakukan input data
  printf("Enter a number to define the rows in Floyd's triangle:\n");
  scanf("%d", &rows);

  // Lakukan perulangan untuk baris
  for (int i = 1; i <= rows; i++) {
    // Lakukan perulangan untuk kolom
    for (int j = 1; j <= i; j++) {
      printf("%d ", n);
      n++;
    }
    printf("\n");
  }

  // Mengembalikan 0 untuk menunjukan bahwa program telah selesai
  return 0;
}