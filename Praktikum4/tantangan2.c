#include <stdio.h>
#include <string.h>
/*
 * Program : Sistem Login dengan Batas Percobaan
 * Nama    : Luthfi Nur Naufal
 * NIM     : 12046126017
 * Deskripsi: Menggunakan do-while dan if else untuk percobaan login
 */
int main() {
    char user[20];
    int password ;
    int kesempatan = 0;
    int berhasil = 0;

do
{
    printf("=============================\n");
    printf("        Sistem Login         \n");
    printf("=============================\n");
    printf("Masukan Username: ");
    scanf("%s", &user);
    printf("Masukan Password: ");
    scanf("%d", &password);
    if (strcmp(user, "admin") == 0 && password == 1234) {
        printf("\n Login Berhasil! \n");
        berhasil = 1;
    } else {
        kesempatan++;
        printf("\n Login Gagal! \n");
        printf("Sisa kesempatan: %d\n", 3 - kesempatan);

    }
  } while (kesempatan < 3 && berhasil == 0);
  if ( kesempatan == 3 && berhasil == 0) {
    printf("\n==============================\n");
    printf("    AKUN TELAH TERKUNCI         \n");
    printf("    SISTEM DIHENTIKAN           \n");
    printf("\n==============================\n");
  }
  return 0;
}