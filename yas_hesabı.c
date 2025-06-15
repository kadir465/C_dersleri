#include <stdio.h>

struct Date {
  int day;
  int month;
  int year;
};

int main() {
  struct Date birth, today, age;

  printf("Enter your date of birth in dd/mm/yyyy format:\n");
  scanf("%d/%d/%d", &birth.day, &birth.month, &birth.year);

  printf("Enter today's date in dd/mm/yyyy format:\n");
  scanf("%d/%d/%d", &today.day, &today.month, &today.year);

  // Gün ayarı
  if (today.day < birth.day) {
    today.day += 30;
    today.month--;
  }
  age.day = today.day - birth.day;

  // Ay ayarı
  if (today.month < birth.month) {
    today.month += 12;
    today.year--;
  }
  age.month = today.month - birth.month;

  // Yıl farkı
  age.year = today.year - birth.year;

  printf("Yaşınız: %d yıl, %d ay, %d gün\n", age.year, age.month, age.day);

  return 0;
}
