#include <stdio.h>

int main() {
    float alas, tinggi, Luas;

    //ambil data alas
    printf("Masukkan alas: ");
    scanf("%f", &alas);

    //ambil data tinggi
    printf("Masukkan tinggi: ");
    scanf("%f", &tinggi);

    //operasi
    Luas = (alas*tinggi)/2;

    //cetak hasil
    printf("Hasil luas= %.3f", Luas);

    return 0;
}
