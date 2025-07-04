#include <stdio.h>
int main(){
printf("bir metin giriniz\n");
  char metin[100];
  gets(metin);
  int boyut;
  boyut=strlen(metin);
  printf("girdiginiz metnin boyutu %d dir\n",boyut);
  printf("girdiginiz metnin tersi\n");
  for(int i=boyut;i>=0;i--){
    printf("%c",metin[i]);
  }
  printf("\n");
  for(int i=0;i<boyut;i++){
    if(metin[i]!=' '){
      printf("%c",metin[i]);
    }
    else{
      printf("\n");
    }
  }
  return 0;
}
 
