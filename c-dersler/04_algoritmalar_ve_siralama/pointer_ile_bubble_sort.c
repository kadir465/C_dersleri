#include <stdio.h>
void swap(int* a,int* b){
  int gecici;
    gecici=*a;
    *a=*b;
    *b=gecici;
  
}
void sıralama(int dizi[],int boyut){
  int i,j;
  for(i=0;i<boyut-1;i++){
    for(j=0;j<boyut-i-1;j++){
     if(dizi[j]>dizi[j+1])
        swap(&dizi[j],&dizi[j+1]);
    }
  }
  printf("Sıralanmış dizi:\n");
  for(i=0;i<boyut;i++){
    printf("%d ",dizi[i]);
  }
      
    }
    int main(){
  int n,i;
  printf("Dizi boyutunu giriniz:\n");
  scanf("%d",&n);
  int dizi[n];
  for(i=0;i<n;i++){
    printf("Dizinin %d. elemanını giriniz:\n",i+1);
    scanf("%d",&dizi[i]);
  }
      sıralama(dizi,n);
}
