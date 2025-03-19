#include <math.h>
#include <stdio.h>

void computeHomeValue(void);

int main() {
  computeHomeValue();

  return 0;
}

void computeHomeValue(void) {
  int popularity, size, homeValue;

  printf("Enter popularity: ");
  scanf("%d", &popularity);

  printf("\nEnter size: ");
  scanf("%d", &size);

  homeValue = (int)((pow(popularity, 3) + pow(size, 2)) * 10000);

  printf("\nHome value is: %d", homeValue);
}
