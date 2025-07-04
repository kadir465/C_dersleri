#include <stdio.h>

int topfonksiyon(int dizi[],int boyut){
    int i,toplam=0;
  
  int* ptr=&dizi[0];

  for(i=0;i<boyut;i++){
    toplam+=*(ptr+i);
  }
  return toplam;
}
int carpfonksiyon(int dizi[],int boyut){
    int i,carpim=1;
  int* ptr=&dizi[0];

  for(i=0;i<boyut;i++){
    carpim*=*(ptr+i);
  }
  return carpim;
}
int main(){
  int n;
  printf("dizinin boyutunu giriniz\n");
  scanf("%d",&n);
int dizi[n];

  printf("dizinin elemanlarını giriniz\n");
  for(int i=0;i<n;i++){
    scanf("%d",&dizi[i]);
  } 
 int f= topfonksiyon(dizi,n);
  printf("sayıların toplamı dizininin ilk elemanınıa göre hesaplanmıştır %d\n",f);
int c= carpfonksiyon(dizi,n);
  printf("sayıların çarpımı dizininin ilk elemanınıa göre hesaplanmıştır %d\n",c);
}
