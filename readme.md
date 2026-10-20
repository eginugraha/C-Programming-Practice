# C Programming Practice
 
Kumpulan program latihan bahasa C yang mencakup dasar-dasar pemrograman, struktur kontrol, algoritma, dan konsep memori. Setiap program berdiri sendiri, sehingga bisa dikompilasi dan dijalankan terpisah.
 
![Language](https://img.shields.io/badge/language-C-blue)
![Standard](https://img.shields.io/badge/standard-C11-informational)
 
## Daftar Program
 
| Program | Topik | Konsep yang dipelajari |
|---|---|---|
| `bmi` | Kalkulator Body Mass Index | Input/output, tipe `float`, percabangan `if-else` untuk kategori BMI |
| `bubble` | Bubble sort | Array, nested loop, penukaran elemen |
| `calculation` | Kalkulasi aritmetika | Operator aritmetika, `switch-case`, penanganan pembagian nol |
| `dangling` | Demonstrasi dangling pointer | Pointer, alokasi dinamis (`malloc`/`free`), *undefined behavior* |
| `equation` | Penyelesaian persamaan | Ekspresi matematika, `math.h`, percabangan |
| `fibonacci` | Deret Fibonacci | Perulangan dan/atau rekursi |
| `floyd` | Segitiga Floyd | Nested loop, pencetakan pola angka berurutan |
| `presedence` | Operator precedence | Urutan evaluasi operator dan penggunaan tanda kurung |
| `storage` | Storage class | `auto`, `static`, `extern`, `register`, scope, dan lifetime variabel |
| `sentinel` | Perulangan berbasis sentinel | `while`, nilai penanda akhir input |
| `ticket` | Perhitungan tiket | Struktur kontrol, perhitungan harga, validasi input |
 
> Beberapa deskripsi disusun berdasarkan nama program. Sesuaikan bila perilaku program Anda berbeda.
 
## Struktur Direktori
 
```
.
├── src/
│   ├── bmi.c
│   ├── bubble.c
│   ├── calculation.c
│   ├── dangling.c
│   ├── equation.c
│   ├── fibonacci.c
│   ├── floyd.c
│   ├── presedence.c
│   ├── storage.c
│   ├── sentinel.c
│   └── ticket.c
├── Makefile
├── LICENSE
└── README.md
```
 
## Prasyarat
 
- Compiler C yang mendukung C11, misalnya `gcc` atau `clang`
- `make` (opsional)
- Untuk program yang memakai `math.h`, tambahkan flag `-lm` saat kompilasi
Cek instalasi:
 
```bash
gcc --version
```
 
## Cara Kompilasi dan Menjalankan
 
Kompilasi satu program dengan peringatan penuh:
 
```bash
gcc -std=c11 -Wall -Wextra -Wpedantic -o bmi src/bmi.c
./bmi
```
 
Program yang memakai `math.h`:
 
```bash
gcc -std=c11 -Wall -Wextra -Wpedantic -o equation src/equation.c -lm
./equation
```
 
Kompilasi semua program sekaligus (jika `Makefile` tersedia):
 
```bash
make          # build semua
make clean    # hapus hasil build
```
 
## Debugging Memori
 
Untuk program seperti `dangling`, gunakan sanitizer dan Valgrind agar kesalahan memori terdeteksi:
 
```bash
gcc -std=c11 -g -fsanitize=address,undefined -o dangling src/dangling.c
./dangling
 
valgrind --leak-check=full ./dangling
```
 
Program `dangling` memang dibuat untuk memperlihatkan perilaku tak terdefinisi. Jangan jadikan kodenya sebagai contoh penulisan yang benar.
 
## Konvensi Kode
 
- Standar bahasa: C11
- Kompilasi bersih tanpa warning pada `-Wall -Wextra -Wpedantic`
- Setiap `malloc` dipasangkan dengan `free`
- Hasil `scanf` selalu diperiksa sebelum dipakai
- Nama berkas huruf kecil, satu program per berkas
## Kontribusi
 
Saran dan perbaikan sangat diterima. Silakan buka *issue* atau kirim *pull request*. Pastikan kode lolos kompilasi tanpa warning sebelum diajukan.
 
## Lisensi
 
Didistribusikan di bawah lisensi MIT. Lihat berkas `LICENSE` untuk detail.
 
## Maintainer
 
Dikelola oleh [Sabio](https://sabio.co.id/), perusahaan pengembang perangkat lunak di Bandung.
