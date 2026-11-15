/*
 * Program : SISTEM KELASIFIKASI BMI
 * Nama    : Luthfi Nur Naufal
 * NIM     : 10246126017
 * Deskripsi: TANTANGAN 1
 */
#include <stdio.h>
int main() {
    char nama[50];
    float berat_badan;
    float tinggi_badan;
    char kategori;
    float BMI;

    // Input
    printf("=== SISTEM KLASIFIKASI BMI ===\n");
    printf("MASUKAN NAMA: ");
    fgets(nama, 50, stdin);
    printf("Masukan Berat Badan: ");
    scanf("%f", &berat_badan);
    printf("Masukan Tinggi Badan: ");
    scanf("%f", &tinggi_badan);

    // perhitungan

    BMI = berat_badan / (tinggi_badan * tinggi_badan);
    // output

    printf("=== Hasil BMI === \n");
    printf("BMI: %.2f\n", BMI);

    if (BMI <= 18.5 ){
        printf("Kategori: Berat Badan Kurang");
    } else if ( BMI >= 18.5 && BMI <= 24.9 ) {
        printf("Kategori: Berat Badan Normal");
    } else if ( BMI >= 25.0 && BMI <= 29.0) {
        printf("Kategori: Berat Badan Berlebihan");
    } else if ( BMI >= 30.0 ){
        printf("Kategori: Obesitas");
    } 

    return 0;
}
