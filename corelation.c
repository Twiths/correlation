#include <stdio.h>
#include <stdlib.h>

int n; // number of items
int xSum, ySum, xSumSq, ySumSq;

float squareNumber(float num) { return num * num; }

int main() {
  int *xVaues = (int *)malloc(sizeof(int) * n);
  int *yVaues = (int *)malloc(sizeof(int) * n);
  puts("How many values do you have?");
  scanf("%d", &n);
  puts("Enter x values");
  for (int i = 0; i <= n; i++) {
    scanf("%d", &xVaues[i]);
    xSum = xSum + xVaues[i];
  }
  printf("Sum of X values is: %d\n", xSum); // Print sumation of x values

  puts("Enter y Values");
  for (int i = 0; i <= n; i++) {
    scanf("%d", &yVaues[i]);
    ySum = ySum + yVaues[i];
    ySumSq = squareNumber(ySum);
  }

  printf("Sum of X values is: %d", ySum); // Print sumation of x values
  printf("Square of Y values is: %d\n", ySumSq);
  return 0;
}