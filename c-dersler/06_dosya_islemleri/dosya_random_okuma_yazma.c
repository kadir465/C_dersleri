#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int i;
  srand(time(NULL));
int n=rand()%100;
  FILE*fp;
  fp=fopen("test.txt","w");
  if(fp==NULL){
    printf("hata");
    return 1;
  }
  for(i=0;i<n;i++){
    putc('a'+rand()%26,fp);
  }
  fclose(fp);
  printf("dosya olusturuldu\n");
 
  printf("dosya icerigi\n");
  fp=fopen("test.txt","r");
  if(fp==NULL){
    printf("hata");
    return 1;
  }
  while(!feof(fp)){
    char c=fgetc(fp);
    if(c!=EOF)
      printf("%c",c);
  }
  return 0;
}
