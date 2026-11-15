/*
 * Program : Kalkulator SI
 * Nama    : Luthfi Nur Naufal
 * NIM     : 10246126017
 * Deskripsi: TANTANGAN 2
 */
#include <stdio.h>

int main() {
    int angka1;
    int angka2;
    int menu;
    int hasil;
    float pembagian;

    // input
    printf("\n=== KALKULATOR SI ===\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Pilih Operasi (1-4): ");
    scanf("%d", &menu);

// inpu angka 1 dan angka 2
    printf("Masukan Angka Pertama: ");
    scanf("%d", &angka1);
    printf("Masukan Angka Kedua: ");
    scanf("%d", &angka2);

    switch (menu) {
        case 1:
        hasil = angka1 + angka2;
        printf("Hasil Penjumlahan: %d", hasil);
        break;

        case 2:
        hasil = angka1 - angka2;
        printf("Hasil Pengurangan: %d", hasil);
        break;

        case 3:
        hasil = angka1 * angka2;
        printf("Hasil Perkalian: %d", hasil);
        break;

        case 4:
            if (angka2 != 0) {
                pembagian = (float)angka1 / angka2;
                printf("Hasil Pembagian: %.2f", pembagian);
            } else {
                printf("Error: Tidak Bisa Dibagi Nol!");
            }
            break;

            default:
            printf("Pilihan Tidak Tersedia!");
    } 


}