#include <stdio.h>
#include <string.h>

struct Student {
  char *name;
  char *surname;
  int age;
  char gender;
  char id[10];
};

int main() {

  struct Student x1 = {"Ahmet", "bayar", 20, 'M', "123456789"};
  struct Student x2 = {"Mehmet", "bayar", 27, 'f', "156789"};
  printf("Name: %s\n", x1.name);
  printf("Surname: %s\n", x1.surname);
  printf("Age: %d\n", x1.age);
  printf("Gender: %c\n", x1.gender);
  printf("ID: %s\n", x1.id);
  printf("\n-------------------------\n");
  printf("Name: %s\n", x2.name);
  printf("Surname: %s\n", x2.surname);
  printf("Age: %d\n", x2.age);
  printf("Gender: %c\n", x2.gender);
  printf("ID: %s\n", x2.id);
  printf("\n-------------------------\n");

  x1.age = 25;
  x1.gender = 'F';
  x1.surname = "Kaya";
  x1.name = "Ali";
  strcpy(x1.id, "9874321");// string kopyalama fonksiyonu dizilerde kullanılır
  printf("yeni veriler\n");
  printf("Name: %s\n", x1.name);
  printf("Surname: %s\n", x1.surname);
  printf("Age: %d\n", x1.age);
  printf("Gender: %c\n", x1.gender);
  printf("ID: %s\n", x1.id);

struct Student x3;
    x3=x1;//benzer olan verilerde işe yarar 
    x3.name="veli";// sadece farklı olabları değiştirecen
    x3.surname="kaya";
    printf("-----------------------\n");
    printf("Name: %s\n", x3.name);
    printf("Surname: %s\n", x3.surname);
    printf("Age: %d\n", x3.age);
    printf("Gender: %c\n", x3.gender);
    printf("ID: %s\n", x3.id);

  return 0;
}
