#include <stdio.h>

int main() {
    int N;

    // Input user
    printf("Masukkan bilangan bulat positif N: ");
    scanf("%d", &N);

    // Perulangan untuk mencetak bilangan genap
    for (int i = 2; i <= N; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
