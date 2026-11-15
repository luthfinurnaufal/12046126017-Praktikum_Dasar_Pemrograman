#include <stdio.h>
/*
 * Program : Mencetak Pola Segitiga Bintang
 * Nama    : Luthfi Nur Naufal
 * NIM     : 12046126017
 * Deskripsi: Nested For Loop Untuk Pola Segitiga Bintang
 */

int main () {
    int N;

    printf("=== CETAK POLA SEGITIGA BINTANG ===\n");
    printf("masukan jumlah baris: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i ; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}