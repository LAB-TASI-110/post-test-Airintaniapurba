#include <stdio.h>

int main() {
    int n;                 /* Jumlah total data */
    int kode_cari;         /* Kategori yang ingin dicari */
    int total_stok = 0;    /* Variabel penampung hasil penjumlahan */
    
    /* Array untuk menyimpan data (maksimal 100 data) */
    int deret_stok[100];
    int deret_kategori[100];

    /* 1. Input jumlah data */
    printf("Masukkan jumlah total data: ");
    scanf("%d", &n);

    /* 2. Input deret stok dan kategori sesuai pola */
    /* Kita gunakan loop for untuk mengambil data satu per satu */
    for (int i = 0; i < n; i++) {
        printf("Data ke-%d\n", i + 1);
        
        printf("  Jumlah Stok: ");
        scanf("%d", &deret_stok[i]);
        
        printf("  Kode Kategori: ");
        scanf("%d", &deret_kategori[i]);
    }

    /* 3. Input kategori yang ingin dicari totalnya */
    printf("\nMasukkan kode kategori yang ingin dihitung: ");
    scanf("%d", &kode_cari);

    /* 4. Proses Perhitungan (Penyaringan data) */
    /* Program akan mengecek satu per satu, jika kategori cocok, stok ditambah */
    for (int i = 0; i < n; i++) {
        if (deret_kategori[i] == kode_cari) {
            total_stok = total_stok + deret_stok[i];
        }
    }

    /* 5. Output Hasil Akhir */
    printf("-------------------------------------------\n");
    printf("Total stok untuk kode kategori %d adalah: %d\n", kode_cari, total_stok);
    printf("-------------------------------------------\n");

    return 0;
}