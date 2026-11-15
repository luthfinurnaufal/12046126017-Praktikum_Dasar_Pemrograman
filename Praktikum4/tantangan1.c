#include <stdio.h>
/*
 * Program : Cetak Tabel Perkalian
 * Nama    : Luthfi Nur Naufal
 * NIM     : 12046126017
 * Deskripsi: Penggunan Nested For Loop untuke mencetak tabel perkalian
 */
int main() {
    int N = 0;

    printf("Masukan Angka Kolom: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++ ) {
        for (int j =1; j <= N; j++) {

            printf("%d ", i * j);
        }
        printf("\n");
    }
}