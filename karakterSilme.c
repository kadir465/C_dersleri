#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void karakterSil(char* metin) {
  printf("silmek istediginiz karakteri giriniz \n");
  char karakter;
  scanf("%c", &karakter);
  int i = 0;
  for(i=0;i<100;i++){
    if(metin[i] == karakter)
      metin[i] = ' ';
    else
       metin[i];
  }
  printf("\n");
  printf("karakter silindi \n");
  printf("yeni metin: %s \n", metin);
}

int main() {

  printf("bir metin giriniz \n");
  char metin[100];
  fgets(metin,sizeof(metin),stdin);

  karakterSil(metin);

  return 0;
}
