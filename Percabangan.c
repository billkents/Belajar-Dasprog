#include <stdio.h>

int main() {
    int umur;

    // Input user
    printf("Masukkan umur: ");
    scanf("%d", &umur);

    // Percabangan
    if (umur < 12) {
        printf("Anak-anak\n");
    } else if (umur >= 12 && umur <= 17) {
        printf("Remaja\n");
    } else if (umur >= 18 && umur <= 59) {
        printf("Dewasa\n");
    } else if (umur >= 60) {  // Lansia berlaku untuk semua umur >= 60
        printf("Lansia\n");
    } else {
        printf("Umur tidak valid\n");  // Jika diperlukan, untuk kasus input negatif
    }

    return 0;
}
