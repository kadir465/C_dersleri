#include <stdio.h>
#include <stdlib.h>
int main(){
  int kelimeSayısı=1,boşlukSayısı=0,i,karakterSayısı=0;
  char* metin;
  char karakter;
  metin=(char*)calloc(100,sizeof(char));
  printf("Metin giriniz:\n");
  gets(metin);

  printf("aranacak karakteri giriniz:\n");
  scanf("%c",&karakter);

  for(i=0;metin[i]!='\0';i++){
    if(metin[i]==karakter)
      karakterSayısı++;
    if(metin[i]==' ')
    {
      boşlukSayısı++;
      kelimeSayısı++;
    }
  }
      printf("karakter sayısı:%d\n",karakterSayısı);
      printf("boşluk sayısı:%d\n",boşlukSayısı);
      printf("kelime sayısı:%d\n",kelimeSayısı);
  
  
  return 0;
}







