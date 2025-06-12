#include <stdio.h>
#include <stdlib.h>

int main(){

  int size;
  
printf("elemanların sayısını giriniz: ");
  scanf("%d",&size);

  int* a=(int*)malloc(size*sizeof(int));

  for(int i=0;i<size;i++){
    printf("%d. elemanı giriniz: ",i+1);
    scanf("%d",&a[i]);
  }
  printf("\n");
  int temp,ort;
  for(int i=0;i<size;i++){
    temp+=a[i];
  }
  ort=temp/size;
  printf("ortalama: %d",ort);
  printf("\n");

  a=(int*)realloc(a,(size+3)*sizeof(int));

  printf("eklenecek elemanları giriniz: ");
  for(int i=size;i<size+3;i++){
    scanf("%d",&a[i]);
  }
  printf("\n");
  for(int i=0;i<size+3;i++){
    printf("%d. eleman: %d\n",i+1,a[i]);
    temp+=a[i];
  }
  ort=temp/(size+3);
  printf("ortalama: %d",ort);

  free(a);
}
