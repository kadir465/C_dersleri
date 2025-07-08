#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char ad[50];
    int adet;
} stok_bilesen;

void urun_list(stok_bilesen *urun, int n) {
    FILE *stok = fopen("test.txt", "r");
    if (stok == NULL) {
        printf("Dosya okunamadı.\n");
        return;
    }

    printf("\n--- Ürün Listesi ---\n");
    for (int i = 0; i < n; i++) {
        if (fscanf(stok, "%d %s %d", &urun[i].id, urun[i].ad, &urun[i].adet) == 3)
            printf("%d %s %d\n", urun[i].id, urun[i].ad, urun[i].adet);
    }
    fclose(stok);
}

int main() {
    printf("\nMarket stok sistemimize hoş geldiniz\n");

    int n;
    printf("Kaç ürün girmek istiyorsunuz:\n");
    scanf("%d", &n);

    stok_bilesen *urun = (stok_bilesen *)malloc(n * sizeof(stok_bilesen));
    if (urun == NULL) {
        printf("Bellek ayrılırken hata oluştu.\n");
        return 1;
    }

    FILE *stok = fopen("test.txt", "w");
    if (stok == NULL) {
        printf("Dosya oluşturulamadı.\n");
        free(urun);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Ürün %d ID: ", i + 1);
        scanf("%d", &urun[i].id);
        printf("Ürün %d adı: ", i + 1);
        scanf("%s", urun[i].ad);
        printf("Ürün %d adeti: ", i + 1);
        scanf("%d", &urun[i].adet);

        fprintf(stok, "%d %s %d\n", urun[i].id, urun[i].ad, urun[i].adet);
    }
    fclose(stok);

    char cevap;
    printf("\nEklemek istediğiniz başka ürün var mı? (1: Evet, 2: Hayır): ");
    scanf(" %c", &cevap);

    if (cevap == '1') {
        int a;
        printf("Kaç ürün daha girmek istiyorsunuz:\n");
        scanf("%d", &a);

        stok_bilesen *yeni_urun = realloc(urun, (n + a) * sizeof(stok_bilesen));
        if (yeni_urun == NULL) {
            printf("Bellek genişletilemedi.\n");
            free(urun);
            return 1;
        }
        urun = yeni_urun;

        stok = fopen("test.txt", "a");
        if (stok == NULL) {
            printf("Dosya açılırken hata.\n");
            free(urun);
            return 1;
        }

        for (int i = n; i < n + a; i++) {
            printf("Yeni Ürün %d ID: ", i + 1 - n);
            scanf("%d", &urun[i].id);
            printf("Yeni Ürün %d adı: ", i + 1 - n);
            scanf("%s", urun[i].ad);
            printf("Yeni Ürün %d adeti: ", i + 1 - n);
            scanf("%d", &urun[i].adet);

            fprintf(stok, "%d %s %d\n", urun[i].id, urun[i].ad, urun[i].adet);
        }
        fclose(stok);
        urun_list(urun, n + a);
        free(urun);
    } else {
        urun_list(urun, n);
        free(urun);
    }

    return 0;
}
