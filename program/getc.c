#include <stdio.h>

int main() {
  printf("%c", getc(stdin));
  return 0;
}

// #include <stdio.h>

// int main() {
//     FILE *file = fopen("storage.c", "r");
//     char ch;

//     if (file == NULL) {
//         printf("Tidak dapat membuka file.\n");
//         return 1;
//     }

//     // Membaca file karakter demi karakter menggunakan getc
//     while ((ch = getc(file)) != EOF) {
//         putchar(ch); // Mencetak karakter ke layar
//     }

//     // Menangani EOF
//     if (ch == EOF) {
//         printf("\nAkhir file tercapai.\n");
//     }

//     fclose(file);
//     return 0;
// }