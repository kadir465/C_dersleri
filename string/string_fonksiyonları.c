#include <stdio.h>
#include <stdlib.h>
int main(){
  char*a;
  char*b;
  a=(char*)malloc(100*sizeof(char));
  b=(char*)malloc(100*sizeof(char));
  printf("Enter the string a:");
  gets(a);
  printf("Enter the string b:");
  gets(b);

  printf("-----------işlemler-----------\n");
  printf("birinci metninin uzunluğu %d\n",strlen(a));
  printf("ikinci metninin uzunluğu %d\n",strlen(b));

  printf("birinci metnin sonuna ikinci metni ekle %s\n",strcat(a,b));
  printf("ikinci metni birinciye kopyala %s\n",strcpy(a,b));
  
  return 0;
}







