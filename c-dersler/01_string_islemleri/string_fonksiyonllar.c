#include <stdio.h>
#include <string.h>

int main() {
    char text1[100];
    char text2[100];

    printf("Enter text1: ");
    fgets(text1, sizeof(text1), stdin);
    text1[strcspn(text1, "\n")] = '\0'; // newline sil

    printf("Enter text2: ");
    fgets(text2, sizeof(text2), stdin);
    text2[strcspn(text2, "\n")] = '\0';

    printf("\nText1: %s\nText2: %s\n", text1, text2);

    // Uzunluk (strlen)
    printf("\n[1] Fonksiyonla uzunluk bulma:\n");
    printf("Text1 length: %lu\n", strlen(text1));
    printf("Text2 length: %lu\n", strlen(text2));

    // Uzunluk (manuel)
    int i, sum1 = 0, sum2 = 0;
    for(i = 0; text1[i] != '\0'; i++) sum1++;
    for(i = 0; text2[i] != '\0'; i++) sum2++;

    printf("\n[2] For döngüsü ile uzunluk bulma:\n");
    printf("Text1 length: %d\n", sum1);
    printf("Text2 length: %d\n", sum2);

    // Birleştirme
    printf("\n[3] Metinlerin birleştirilmesi:\n");
    char concat[200]; // yeni string
    strcpy(concat, text1);
    strcat(concat, text2);
    printf("Birleşmiş metin: %s\n", concat);

    // Kopyalama
    printf("\n[4] Text2'nin text1 üzerine kopyalanması:\n");
    strcpy(text1, text2);
    printf("Yeni Text1: %s\n", text1);

    // Karşılaştırma
    printf("\n[5] Karşılaştırma:\n");
    int cmp = strcmp(text1, text2);
    if (cmp == 0)
        printf("Text1 ve Text2 aynıdır.\n");
    else
        printf("Text1 ve Text2 farklıdır.\n");

    return 0;
}
