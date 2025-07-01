#include <stdio.h>

typedef struct {
  int no;
  char name[50];
  float vize;
  float final;
  float ort;
} ogrenci;

int main() {
  int i, m;
  float enbuyuk;
  ogrenci ogr[100];
  printf("Ogrenci sayisi giriniz:\n");
  scanf("%d", &m);

  for (i = 0; i < m; i++) {
    printf("%d. ogrenci bilgileri\n", i + 1);
    printf("Ogrenci no giriniz:\n");
    scanf("%d", &ogr[i].no);
    printf("Ogrenci adini giriniz:\n");
    scanf("%s", &ogr[i].name);
    printf("Ogrenci vize notunu giriniz:\n");
    scanf("%f", &ogr[i].vize);
    printf("Ogrenci final notunu giriniz:\n");
    scanf("%f", &ogr[i].final);
    ogr[i].ort = (ogr[i].vize * 0.4) + (ogr[i].final * 0.6);
    printf("ögrenci ortalamasi:%f\n", ogr[i].ort);
    enbuyuk = ogr[0].ort;
    if (ogr[i].ort > enbuyuk) {
      enbuyuk = ogr[i].ort;
    }
    printf("%d.öğrenci ortalaması en buyuk ortalama:%f\n", i, enbuyuk);
  }
  printf("----------------------------------------\n");
  for (i = 0; i < m; i++) {
    printf("%d.öğreninin bilgileri:\n", i + 1);
    printf("öğrenci no:%d\n", ogr[i].no);
    printf("öğrenci adı:%s\n", ogr[i].name);
    printf("öğrenci vize notu:%f\n", ogr[i].vize);
    printf("öğrenci final notu:%f\n", ogr[i].final);
    printf("----------------------------------------\n");
  }
  return 0;
}
