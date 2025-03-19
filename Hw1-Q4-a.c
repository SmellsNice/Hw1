#include <math.h>
#include <stdio.h>

int computeHomeValue(int popularity, int size);

int main() {
  int popularity, size, homeValue;

  printf("Enter popularity: ");
  scanf("%d", &popularity);

  printf("\nEnter size: ");
  scanf("%d", &size);

  homeValue = computeHomeValue(popularity, size);

  printf("\nHome value is: %d", homeValue);

  return 0;
}

int computeHomeValue(int popularity, int size) {
  return (int)((pow(popularity, 3) + pow(size, 2)) * 10000);
}
