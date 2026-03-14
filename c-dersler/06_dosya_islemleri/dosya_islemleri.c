#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fp;
    char metin[100];

    // Dosyayı yazma modunda aç
    fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Dosya oluşturulamadı\n");
        return 1;
    }

    printf("Dosya oluşturuldu\n");
    printf("Yazmak istediğiniz metni giriniz:\n\n");
   gets(metin); // gets yerine fgets kullanılır

    fprintf(fp, "%s", metin); // metni dosyaya yaz
    fclose(fp);
    printf("Dosya yazıldı ve kapatıldı\n");

    // Dosyayı okuma modunda tekrar aç
    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Dosya okunamadı\n");
        return 1;
    }

    fgets(metin,100,fp);
    printf("Dosya içeriği: %s\n", metin);
    fclose(fp);

    fp=fopen("test.txt","r");
    if(fp==NULL){
printf("dosya açlılmadı ");
    }
    else{
        printf("dosya karakteri\n");
        while(!feof(fp))
            printf("%c", fgetc(fp));
        fclose(fp);
    }
    return 0;
}
