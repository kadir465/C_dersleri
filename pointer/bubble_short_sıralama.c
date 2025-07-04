#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void siralama(int dizi[], int boyut) {
    int i, j, temp;
    int yenidizi[boyut];

    // Bubble sort ile sıralama
    for (i = 0; i < boyut - 1; i++) {
        for (j = 0; j < boyut - i - 1; j++) {
            if (dizi[j] > dizi[j + 1]) {
                // Doğru swap işlemi
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }

    // Sıralı diziyi yenidizi'ye kopyala
    for (i = 0; i < boyut; i++) {
        yenidizi[i] = dizi[i];
    }

    // Yazdır
    printf("Sıralanmış (yeni) dizi elemanları:\n");
    for (i = 0; i < boyut; i++) {
        printf("%d ", yenidizi[i]);
    }
    printf("\n");
}

int main() {
    srand(time(NULL));
    int dizi[6];

    printf("Orijinal dizi:\n");
    for (int i = 0; i < 6; i++) {
        dizi[i] = rand() % 56;
        printf("%d ", dizi[i]);
    }
    printf("\n");

    siralama(dizi, 6);

    return 0;
}
