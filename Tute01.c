/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
      float num1,num2,avg;
  printf("enter mark1 :");
  scanf("%f",&num1);
  printf("enter mark2 :");
  scanf("%f",&num2);

  avg=(num1+num2)/2;

  printf("your average : %.2f",avg);
  return 0;
}

