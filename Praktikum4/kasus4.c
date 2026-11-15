#include <stdio.h>
/*
 * Program : Menu Aplikasi Kasir Minimarket
 * Nama    : Luthfi Nur Naufal
 * NIM     : 12046126017
 * Deskripsi: Do-While untuk menu + Switch-cae untuk pilihan
 */
int main() {

    int pilihan;
    float harga, jumlah, subtotal;
    float total_belanja=0;

    do {
        printf("\n=== MENU UTAMA ===\n");
        printf("1. Tambah Belanja\n");
        printf("2. Lihat Total Belanja \n");
        printf("3. Bayar & Keluar\n");
        printf("Pilih Menu (1-3): ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            printf("\n-- Tambah Belanja --\n");
            printf("Harga barang : Rp ");
            scanf("%f", &harga);
            printf("Jumlah Beli : ");
            scanf("%f", &jumlah);
            subtotal = harga * jumlah;
            total_belanja += subtotal;
            printf("Subtotal     : Rp %.2f\n", subtotal);
            printf("Total Belanja Sementara : Rp %.2f\n", total_belanja);
            break;
        case 2:
            printf("\n TOTAL BELANJA SEMENTARA: Rp %.2f\n", total_belanja);
            break;
        case 3 :
            printf("\n=== PEMABAYARAN ===\n");
            printf("Total yang harus dibayar : Rp %.2f", total_belanja);
            printf("Terima Kasih telah Berbelanja!\n");
            break;
        
        default:
            printf("\n ERROR: Menu Tidak Tersedia. Pilih 1-3 saja.\n");
            break;
        }
    } while (pilihan != 3);
 return 0;
}