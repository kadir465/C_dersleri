#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
char name [200];
int age;
char soyad[200];
}kullanıcı;

void dosyayaYaz(kullanıcı* bilgi,int n){
  FILE* fb;
  FILE*fb1;
  fb1=fopen("gec.txt","w");
  fb=fopen("test.txt","r");
  int i;
  for(i=0;i<n;i++){
    fscanf(fb,"%s %s %d\n",bilgi[i].name,bilgi[i].soyad,&bilgi[i].age);
    printf("%s %s %d\n",bilgi[i].name,bilgi[i].soyad,bilgi[i].age);
    fprintf(fb1,"%s %s %d\n",bilgi[i].name,bilgi[i].soyad,bilgi[i].age);
  }
  fclose(fb);
  fclose(fb1);
}

int main(){
int n,i,a;
  int secim;
  kullanıcı* bilgi;
  kullanıcı* bilgi1;
  FILE* fb;
  fb=fopen("test.txt","w");

  printf("kaç tane kullanıcı girmek istiyorsunuz:?\n");
  scanf("%d",&n);

  bilgi=(kullanıcı*)malloc(n*sizeof(kullanıcı));

  for(i=0;i<n;i++){
    printf("%d. kullanıcı adı giriniz: ",i+1);
    scanf("%s",bilgi[i].name);
    printf("%d. kullanıcı soyadı giriniz: ",i+1);
    scanf("%s",bilgi[i].soyad);
    printf("%d. kullanıcı yaşını giriniz: ",i+1);
    scanf("%d",&bilgi[i].age);

    fprintf(fb,"%s %s %d\n",bilgi[i].name,bilgi[i].soyad,bilgi[i].age);
    
  }
  

  printf("eklemek kullanıcı var mı ?\n");
  printf("1- evet\n");
  printf("2- hayır\n");
  scanf("%d",&secim);
  if(secim==1){
    printf("kaç tane kullanıcı girmek istiyorsunuz:?\n");
    scanf("%d",&a);
    bilgi1=(kullanıcı*)realloc(bilgi,(n+a)*sizeof(kullanıcı));
    for(i=n;i<n+a;i++){
      printf("%d. kullanıcı adı giriniz: ",i+1);
      scanf("%s",bilgi1[i].name);
      printf("%d. kullanıcı soyadı giriniz: ",i+1);
      scanf("%s",bilgi1[i].soyad);
      printf("%d. kullanıcı yaşını giriniz: ",i+1);
      scanf("%d",&bilgi1[i].age);

      bilgi=bilgi1;
      fprintf(fb,"%s %s %d\n",bilgi[i].name,bilgi[i].soyad,bilgi[i].age);

      dosyayaYaz(bilgi,(n+a));
    }
  }
  else{
    dosyayaYaz(bilgi,n);  
  }
  fclose(fb);
  
  return 0;
}
