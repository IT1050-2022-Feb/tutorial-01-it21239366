/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark01, mark02;
  float total, average;

  printf("Enter Mark 1 : ");
  scanf("%d", &mark01);
  printf("Enter Mark 2 : ");
  scanf("%d", &mark02);

  total = mark01 + mark02;
  average = total / 2;

  printf("Total is : %.2f\n", total);
  printf("Average is : %.2f", average);

  
  return 0;
}

