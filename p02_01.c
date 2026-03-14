#include <stdio.h>
#include <string.h>

int main() {
    char kode[10];
    float beratButet, beratUcok, totalBerat;
    long hargaPerKg, totalOngkir, diskon;
    char kota[20];
    char keterangan[20];
    int isLuarPulau;

    while (1) {
        // Input Kode Kota
        scanf("%s", kode);

        // Cek jika input adalah END untuk berhenti
        if (strcmp(kode, "END") == 0) {
            break;
        }

        // Input Berat Paket Butet
        scanf("%f", &beratButet);

        // Inisialisasi data berdasarkan papan daftar ongkir
        isLuarPulau = 0;
        if (strcmp(kode, "MDN") == 0) {
            strcpy(kota, "Medan");
            hargaPerKg = 8000;
        } else if (strcmp(kode, "BLG") == 0) {
            strcpy(kota, "Balige");
            hargaPerKg = 5000;
        } else if (strcmp(kode, "JKT") == 0) {
            strcpy(kota, "Jakarta");
            hargaPerKg = 12000;
            isLuarPulau = 1;
        } else if (strcmp(kode, "SBY") == 0) {
            strcpy(kota, "Surabaya");
            hargaPerKg = 13000;
            isLuarPulau = 1;
        } else {
            continue; // Kode kota tidak dikenal
        }

        // Kalkulasi berat berdasarkan gambar timbangan
        beratUcok = 1.5 * beratButet;
        totalBerat = beratButet + beratUcok;
        totalOngkir = totalBerat * hargaPerKg;

        // Output Struk Pembayaran
        printf("Struk Pembayaran\n");
        printf("Kota tujuan: %s\n", kota);
        printf("Berat paket Butet: %.1f kg\n", beratButet);
        printf("Berat paket Ucok: %.1f kg\n", beratUcok);
        printf("Total berat: %.1f kg\n", totalBerat);

        // Logika Promo Lebaran
        diskon = 0;
        printf("Informasi promo yang diperoleh: ");
        
        int adaPromo = 0;
        if (totalBerat > 10) {
            diskon = totalOngkir * 0.1;
            printf("Diskon 10%%");
            adaPromo = 1;
        }
        
        if (isLuarPulau == 1) {
            if (adaPromo) printf(", ");
            printf("Asuransi gratis");
            adaPromo = 1;
        }

        if (!adaPromo) {
            printf("-");
        }
        printf("\n");

        totalOngkir -= diskon;
        printf("Total ongkos kirim: %ld\n", totalOngkir);
        printf("---------------------------\n");
    }

    return 0;
}