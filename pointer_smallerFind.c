#include <stdio.h>
#include<time.h>

int arryList(int* dizi,int boyut);
int main(){
int size=6;
    int arr[size];
  srand(time(NULL));
  printf("arr: \n");
  for(int i=0;i<size;i++){
    arr[i]=rand()%54;
    printf("%d ",arr[i]);
  }
arryList(arr,size);
  
}
int arryList(int* dizi,int boyut){

  int enkucuk, yedek;
  for (int i = 0; i < boyut-1; i++)
  {
  enkucuk = i;
  for (int j = i + 1; j < boyut; j++)
  if (dizi[j] < dizi[enkucuk])
  enkucuk = j;
  if(enkucuk!=i){
  yedek = dizi[i];
  dizi[i] = dizi[enkucuk];
  dizi[enkucuk] = yedek;
  }
  }
  printf("\n");
  for (int i = 0; i < boyut; i++)
  {
    printf("%d ",dizi[i]);
  }
}
