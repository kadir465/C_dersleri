#include <stdio.h>

arryTemp(int* arry,int* size);
int main(){

  int size;
  printf("Enter the size of the array: \n");
  scanf("%d", &size);
  int arry[size];

  printf("please enter the arry elements\n");
  for(int i=0;i<size;i++){
    scanf("%d",&arry[i]);
  }
  arryTemp(arry,size);
  
}
int arryTemp(int* arry,int* size){
  int temp=0;

  for(int i=0;i<size;i++){
    temp+=arry[i];
   arry[i]=arry[i+1];
  }
  printf("the new array is %d",temp);
}
