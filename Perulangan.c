#include <stdio.h>

int main() {
    int i, angka, hasil;

    //ambil angka
    printf("Masukkan angka: ");
    scanf("%d", &angka);
    
    hasil = 1; //inisialisasi agar hasil dimulai dari 1

    //perulangan
    for (i=1; i<=angka; i++) {
        printf("%d", hasil);
        hasil = hasil + 1;
    }

    return 0;
}
