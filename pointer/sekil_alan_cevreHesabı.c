      #include <stdio.h>

      int area_and_environment(float *area, float *r, float *environment, int value);

      int main() {
          float area, r, environment;
          int value;

          printf("Enter the choose process\n");
          printf("1 - Square\n2 - Triangle\n3 - Circle\n");
          scanf("%d", &value);

          area_and_environment(&area, &r, &environment, value);

          return 0;
      }

      int area_and_environment(float *area, float *r, float *environment, int value) {
          if (value == 1) {
              printf("Enter the side of the square:\n");
              scanf("%f", r);  // r is already a pointer
              *area = (*r) * (*r);
              printf("Area of square is: %.2f\n", *area);
              *environment = 4 * (*r);
              printf("Environment of square is: %.2f\n", *environment);
          } 
          else if (value == 2) {
              printf("Enter the side of the triangle:\n");
              scanf("%f", r);
              *area = ((*r) * (*r)) / 2;
              printf("Area of triangle is: %.2f\n", *area);
              *environment = 3 * (*r);
              printf("Environment of triangle is: %.2f\n", *environment);
          } 
          else if (value == 3) {
              printf("Enter the radius of the circle:\n");
              scanf("%f", r);
              *area = 3.14f * (*r) * (*r);
              printf("Area of circle is: %.2f\n", *area);
              *environment = 2 * 3.14f * (*r);
              printf("Environment of circle is: %.2f\n", *environment);
          } 
          else {
              printf("Invalid selection!\n");
              return 1;  
          }

          return 0;  
      }
