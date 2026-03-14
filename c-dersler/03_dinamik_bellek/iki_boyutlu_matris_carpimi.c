#include <stdio.h>
#include <stdlib.h>

// İki boyutlu matris çarpımı
int main() {
    int row1, col1, row2, col2, i, j, k;
    int **first, **second, **mult;

    // İlk matrisin boyutları
    printf("Enter the rows and columns of the first matrix:\n");
    scanf("%d %d", &row1, &col1);

    // İlk matrisin bellekte yer ayrılması
    first = (int **)malloc(row1 * sizeof(int *));
    for (i = 0; i < row1; i++) {
        first[i] = (int *)malloc(col1 * sizeof(int));
        for (j = 0; j < col1; j++) {
            printf("Enter element [%d][%d] of first matrix: ", i, j);
            scanf("%d", &first[i][j]);
        }
    }

    // İkinci matrisin boyutları
    printf("Enter the rows and columns of the second matrix:\n");
    scanf("%d %d", &row2, &col2);

    // Uyum kontrolü (çarpım için col1 == row2 olmalı)
    if (col1 != row2) {
        printf("Matrices cannot be multiplied!\n");
        return 1;
    }

    // İkinci matrisin bellekte yer ayrılması
    second = (int **)malloc(row2 * sizeof(int *));
    for (i = 0; i < row2; i++) {
        second[i] = (int *)malloc(col2 * sizeof(int));
        for (j = 0; j < col2; j++) {
            printf("Enter element [%d][%d] of second matrix: ", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    // Çarpım matrisi için bellekte yer ayırma
    mult = (int **)malloc(row1 * sizeof(int *));
    for (i = 0; i < row1; i++) {
        mult[i] = (int *)malloc(col2 * sizeof(int));
    }

    // Matris çarpımı işlemi
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            mult[i][j] = 0;
            for (k = 0; k < col1; k++) {
                mult[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    // Sonuç matrisi yazdırma
    printf("\nResulting matrix:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }

    // Bellek temizliği (iyi alışkanlık)
    for (i = 0; i < row1; i++) free(first[i]);
    free(first);

    for (i = 0; i < row2; i++) free(second[i]);
    free(second);

    for (i = 0; i < row1; i++) free(mult[i]);
    free(mult);

    return 0;
}
