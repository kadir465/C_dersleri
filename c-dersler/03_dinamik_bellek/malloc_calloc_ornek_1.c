#include <stdio.h>

void islem(int *a, int n, float *ort, float *toplam) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d. sayıyı giriniz:\n", i + 1);
    scanf("%d", &a[i]);
    *toplam += a[i];
  }
  *ort = *toplam / n;

  printf("ortalama:%.2f\n", *ort);
  printf("toplam:%.2f\n", *toplam);
}

void islemler1(int *a, int n, int *enbuyuk) {
  int i;
  *enbuyuk = a[0];
  for (i = 0; i < n; i++) {
    if (a[i] > *enbuyuk)
      *enbuyuk = a[i];
  }
  printf("en buyuk:%d\n", *enbuyuk);
}
int main() {
  int n;
  float ort, toplam = 0;
  printf("n sayısını giriniz:\n");
  scanf("%d", &n);

  int *a = (int *)malloc(n * sizeof(int));
  islem(a, n, &ort, &toplam);

  printf("----------------\n");
  a = (int *)realloc(a, 2 * n * sizeof(int));
  islem(a, 2 * n, &ort, &toplam);

  printf("----------------\n");

  int enbuyuk = 0;
  int *b = (int *)calloc(n, sizeof(int));
  islemler1(b, n, &enbuyuk);
  free(a);
  free(b);
  return 0;
}
