#include <stdio.h>
#include <string.h>

int main() {
    char kode[5];
    int jumlah;
    long harga = 0;
    char nama_menu[30] = "";
    long total_bayar = 0;

    printf("=== OPERASIONAL KAFETARIA IT DEL ===\n");
    printf("Masukkan Kode Menu: ");
    scanf("%s", kode);

    // Logika Pemilihan Menu Minuman
    if (strcmp(kode, "01") == 0) {
        strcpy(nama_menu, "Kopi Susu");
        harga = 10000;
    } else if (strcmp(kode, "02") == 0) {
        strcpy(nama_menu, "Kopi Hazelnut");
        harga = 12000;
    } else if (strcmp(kode, "03") == 0) {
        strcpy(nama_menu, "Matcha");
        harga = 15000;
    } else if (strcmp(kode, "04") == 0) {
        strcpy(nama_menu, "Red Velvet");
        harga = 15000;
    } else if (strcmp(kode, "05") == 0) {
        strcpy(nama_menu, "Chocolatos");
        harga = 8000;
    } 
    // Logika Pemilihan Menu Makanan
    else if (strcmp(kode, "001") == 0) {
        strcpy(nama_menu, "Nasi Goreng");
        harga = 15000;
    } else if (strcmp(kode, "002") == 0) {
        strcpy(nama_menu, "Nasi Ayam Penyet");
        harga = 18000;
    } else if (strcmp(kode, "003") == 0) {
        strcpy(nama_menu, "Nasi Kampung");
        harga = 15000;
    } else {
        printf("Kode tidak valid!\n");
        return 0;
    }

    printf("Masukkan Jumlah Beli: ");
    scanf("%d", &jumlah);

    // Menghitung total
    total_bayar = harga * (long)jumlah;

    // Output Data Transaksi
    printf("\n--- HASIL INPUT USER ---\n");
    printf("Kode yang dimasukkan: %s\n", kode);
    printf("Nama Menu           : %s\n", nama_menu);
    printf("Jumlah Pesanan      : %d\n", jumlah);
    printf("Harga Satuan        : %ld\n", harga);
    printf("--------------------------\n");
    printf("TOTAL PEMBAYARAN    : %ld\n", total_bayar);

    return 0;
}