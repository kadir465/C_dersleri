#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int kitap_id;
  char kitap_adi[50];
  char yazar_adi[50];
  int sayfa_sayisi;
} bilgi;

void kitaplari_listele() {
  FILE *fb = fopen("test.txt", "r");
  if (fb == NULL) {
    printf("Dosya açma hatası!\n");
    return;
  }

  char satir[200];
  printf("\n--- Kayıtlı Kitaplar ---\n");
  while (fgets(satir, sizeof(satir), fb) != NULL) {
    printf("%s", satir);
  }

  fclose(fb);
}

int main() {
  int i, n, cevap;

  bilgi *kitap = NULL;
  FILE *fb = fopen("test.txt", "w");
  if (fb == NULL) {
    printf("Dosya açılamadı.\n");
    return 1;
  }

  printf("Kaç kitap girmek istiyorsunuz? ");
  scanf("%d", &n);

  kitap = (bilgi *)malloc(n * sizeof(bilgi));
  if (kitap == NULL) {
    printf("Bellek ayrılma hatası.\n");
    return 1;
  }

  // Başlık satırı
  fprintf(fb, "Kitap ID | Kitap Adı | Yazar Adı | Sayfa Sayısı\n");

  for (i = 0; i < n; i++) {
    printf("%d. kitabın ID'sini girin: ", i + 1);
    scanf("%d", &kitap[i].kitap_id);
    printf("%d. kitabın adını girin: ", i + 1);
    scanf(" %[^\n]", kitap[i].kitap_adi); // boşluklu giriş için
    printf("%d. kitabın yazarını girin: ", i + 1);
    scanf(" %[^\n]", kitap[i].yazar_adi);
    printf("%d. kitabın sayfa sayısını girin: ", i + 1);
    scanf("%d", &kitap[i].sayfa_sayisi);

    fprintf(fb, "%d %s %s %d\n", kitap[i].kitap_id, kitap[i].kitap_adi,
            kitap[i].yazar_adi, kitap[i].sayfa_sayisi);
  }
  fclose(fb);

  printf("\nEklemek istediğiniz başka kitap var mı?\n1 - Evet\n2 - Hayır\nSeçiminiz: ");
  scanf("%d", &cevap);

  if (cevap == 1) {
    int m;
    printf("Kaç kitap daha ekleyeceksiniz? ");
    scanf("%d", &m);

    bilgi *yeniKitap = realloc(kitap, (n + m) * sizeof(bilgi));
    if (yeniKitap == NULL) {
      printf("Bellek yeniden ayrılırken hata.\n");
      free(kitap);
      return 1;
    }
    kitap = yeniKitap;

    fb = fopen("test.txt", "a");
    if (fb == NULL) {
      printf("Dosya açılamadı.\n");
      free(kitap);
      return 1;
    }

    for (i = n; i < n + m; i++) {
      printf("%d. kitabın ID'sini girin: ", i + 1);
      scanf("%d", &kitap[i].kitap_id);
      printf("%d. kitabın adını girin: ", i + 1);
      scanf(" %[^\n]", kitap[i].kitap_adi);
      printf("%d. kitabın yazarını girin: ", i + 1);
      scanf(" %[^\n]", kitap[i].yazar_adi);
      printf("%d. kitabın sayfa sayısını girin: ", i + 1);
      scanf("%d", &kitap[i].sayfa_sayisi);

      fprintf(fb, "%d %s %s %d\n", kitap[i].kitap_id, kitap[i].kitap_adi,
              kitap[i].yazar_adi, kitap[i].sayfa_sayisi);
    }

    fclose(fb);
    printf("\nTüm kitaplar listeleniyor...\n");
    kitaplari_listele();

  } else {
    printf("\nTüm kitaplar listeleniyor...\n");
    kitaplari_listele();
  }

  free(kitap);
  return 0;
}
