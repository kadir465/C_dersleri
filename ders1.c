#include <stdio.h>

int pointer(int *a);
int yerdegistir(int *a, int *b);
int main() {
  int number, number2;
  printf("please enter the number1\n");
  scanf("%d", &number);
  printf("please enter the number2\n");
  scanf("%d", &number2);

  yerdegistir(&number, &number2);
  printf("new number1 %d \n", number);
  printf("new number2 %d \n", number2);

  pointer(&number);
  printf("new number %d \n", number);
}
int pointer(int *a) { // pointer ile alının değerin adresini ve adreste yazılan
                      // değeri yazdırdık
  printf("%d \n", *a);
  printf("%x \n", a);

  *a = 10; // pointerin tuttuğu aderesteki değperi değiştirsek bizim girdiğimiz
           // numaartaa da değişir
  printf("%d \n", *a);
  printf("%x \n", a);
  return 0;
}

int yerdegistir(int *a, int *b) {// pointer kullnarak iki sayının yerini değiştirdik
  int temp = *a;
  *a = *b;
  *b = temp;
  return 0;
}
