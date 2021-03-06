#include <stdio.h>
#include <stdlib.h>

int n; // number of items
int xSum, ySum, xSumSq, ySumSq, y, x, a, b, xY;

float squareNumber(float num) { return num * num; }

int main() {
  int *xVaues = (int *)malloc(sizeof(int) * n);
  int *yVaues = (int *)malloc(sizeof(int) * n);

  puts("How many values do you have?");
  scanf("%d", &n);
  puts("Enter x and y values");
  for (int i = 0; i <= n; i++) {
    printf("X value [%d]: ", i);
    scanf("%d", &xVaues[i]);
    xSum = xSum + xVaues[i];
    xSumSq = squareNumber(xSum);

    // y Values
    printf("Y value [%d]: ", i);
    scanf("%d", &yVaues[i]);
    ySum = ySum + yVaues[i];
    ySumSq = squareNumber(ySum);
  }

  y = a * x + b;
  //   Print the output here
  printf("Sum of X values is: %d\n", xSum);      // Print sumation of x values
  printf("Sum of Y values is: %d\n", ySum);      // Print sumation of x values
  printf("Square of Y values is: %d\n", ySumSq); // Print Square of Y values
  return 0;
}