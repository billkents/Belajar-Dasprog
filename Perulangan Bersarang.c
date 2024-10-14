#include <stdio.h>

int main() {
    int N;
    printf("Masukkan jumlah baris: ");
    scanf("%d", &N);

    // Loop untuk baris
    for (int i = 1; i <= N; i++) {
        // Loop untuk mencetak angka di setiap baris
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");  // Pindah ke baris berikutnya
    }

    return 0;
}
