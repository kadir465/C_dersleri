#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
 FILE* fp;
  char name[100];
  printf("isim girin\n");
  scanf("%s",&name);
  fp= fopen("file.txt", "w");// sadece yama işleminde kullanılır ve dosya yoksa oluşturur ve dosya varsa içini siler ve yazmaya başlar
  
 // fp= fopen("file.txt", "a");// ekleme işleminde kullanılır ve dosya yoksa oluşturur ve dosya varsa içini silmez ve en sona ekleme yapar
  
  if(fp==NULL){// dosyanın çalışıp çalışmadığını kontrol eder
    printf("Error");
    return 1;
  }
  else
   putc('m', fp);// dosyaya tek bir karakter yazmak için kullanılır ve tek tırnak kullanılır
  fputc('\nj',fp);// dosyaya tek bir karakter yazmak için kullanılır ve tek tırnak kullanılır
  fprintf(fp, "\nHello World");// dosyaya birden fazla karakter yazmak için kullanılır ve çift tırnak kullanılır
  fprintf(fp, "\nThis is my file");

  fprintf(fp,"\n%s",name);//kullanıcıdan alının veriler de direkt eklenebilir

  //fprintf ikinci bir pararmetere de alabilir ve b u parametre değeri dosyaya  yazdırırlır diğerleri parametre alkamaza
  
  fputs("\nThis file",fp);// dosyaya birden fazla karakter yazmak için kullanılır ve çift tırnak kullanılır
  
  fclose(fp);// dosyayı kapatmak için kullanılır
  return 0;
}
