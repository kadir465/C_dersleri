#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char metin[100];
  int i, total = 0,total2=0;
  printf("Metin giriniz:\n");
 gets(metin);

  printf("for ile metin uzunluğu bulma:\n");
  for (i = 0; i < 100; i++) {
    if (metin[i] == '\0')
      break;
    else
      total++;

    if(metin[i]==' ')
      total2++;
  }
  printf("meetindeki kelime sayısı: %d\n", total2+1);
  printf("Metin uzunluğu: %d\n", total);

  printf("--------------------\n");
  total=0;
  total=strlen(metin);
  printf("strlen ile metin uzunluğu bulma:\n");
  printf("Metin uzunluğu: %d\n", total);
  
  return 0;
}
