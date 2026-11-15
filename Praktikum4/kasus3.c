#include <stdio.h>
/*
 * Program : Game Tebak Angka
 * Nama    : Luthfi Nur Naufal
 * NIM     : 12046126017
 * Deskripsi: While loop untuk game tebak angka dengan petunjuk
 */
int main() {
    const int ANGKA_RAHASIA = 73;
    int tebakan = 0;
    int jumlah_coba = 0;

    printf("=== GAME TEBAK ANGKA ===\n");
    printf("Saya punya angka rahasia antara 1-100.\n");
    printf("Coba tebak!\n\n");

    while ( tebakan != ANGKA_RAHASIA ) {
        printf("Masukan tebakan Anda: ");
        scanf("%d", &tebakan);
        jumlah_coba++;

        if (tebakan < ANGKA_RAHASIA) {
            printf("TEbakan Terlalu KECIL! Coba Lagi. \n\n");

        } else if ( tebakan > ANGKA_RAHASIA) {
               printf("Tebakan Terlalu BESAR!! Coba Lagi. \n\n"); 
        } else {
            printf("\n*** SELAMAT! Anda Benar! ***\n");
            printf("angka rahasianya Adalah: %d\n", ANGKA_RAHASIA);
        }
    }
    printf("\n Anda menebak sebanyak %d kali. \n", jumlah_coba);
    printf("TEROMA KASIH SUDAH BERMAIN!\n");

    return 0;
}