#include <stdio.h> // Fungsi input dan output

// Fungsi utama yang dieksekusi saat program dijalankan
int main() {  
  // Inisialisasi variable 
  int reservedPrice, standPrice, groundPrice, reservedTicketSold, standTicketSold, groundTicketSold, totalTicketSold;
  float reservedSales, standSales, groundSales, totalMoneyCollected;

  // Mencetak dan menyimpan input data reserved ticket
  printf("Reserved price and tickets sold? ");
  scanf("%d %d", &reservedPrice, &reservedTicketSold);

  // Mencetak dan menyimpan input data stand ticket
  printf("Stands price and tickets sold? ");
  scanf("%d %d", &standPrice, &standTicketSold);

  // Mencetak dan menyimpan input data reserved ticket
  printf("Grounds price and tickets sold? ");
  scanf("%d %d", &groundPrice, &groundTicketSold);

  // Menghitung sales setiap kategori tiket
  reservedSales = (float)reservedPrice * reservedTicketSold;
  standSales = (float)standPrice * standTicketSold;
  groundSales = (float)groundPrice * groundTicketSold;

  // Mencetak hasil setiap perhitungan kategori tiket
  printf("Reserved sales: %.2f\n", reservedSales);
  printf("Stands sales: %.2f\n", standSales);
  printf("Grounds sales: %.2f\n", groundSales);

  // Menghitung dan mencetak total tiket terjual
  totalTicketSold = reservedTicketSold + standTicketSold + groundTicketSold;
  printf("%d tickets were sold\n", totalTicketSold);

  // Menghitung dan mencetak total pendapatan diterima
  totalMoneyCollected = reservedSales + standSales + groundSales;
  printf("Total money collected: %.2f", totalMoneyCollected);

  // Mengembalikan 0 untuk menunjukan bahwa program telah selesai
  return 0;
}