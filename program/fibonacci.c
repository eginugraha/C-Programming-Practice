#include <stdio.h> // Fungsi input output

// Fungsi utama yang akan dijalankan oleh program
int main() {
  // Inisialisasi variable fib array dengan 10 data
  int fib[10];
  // Inisialisasi pointer "*ptr" untuk untuk variable "fib"
  int *ptr = fib;
  // Inisialisasi pointer di element ke-0 dengan value 0
  *ptr = 0;
  // Inisialisasi pointer di element ke-1 dengan value 1
  *(ptr + 1) = 1;

  // Perulangan untuk menghitung deret bilangan fibonacci hingga kelipatan ke-10
  for (int i = 0; i < 10; i++) {
    // Penambahan kondisi untuk rumus fibonacci dimulai dari index ke-2
    if (i > 1) {
      /**
       * Untuk mengambil data diubah menjadi *(ptr + i) karena data disimpan di
       * pointer elemen tersebut, jadi tidak menggunakan index perulangan.
       */
      *(ptr + i) = *((ptr + i) - 1) + *((ptr + i) - 2); // Fn = (Fn-1) + (Fn-2)
    }
    // Mencetak hasil ke layar
    printf("Array ke: %d, berisi value: %d \n", i, *(ptr + i));
  }

  // Mengembalikan 0 untuk menunjukan bahwa program telah selesai
  return 0;
}
