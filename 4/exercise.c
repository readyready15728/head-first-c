#include <stdio.h>

// Setting things up like this is kinda terrible but it wasn't my idea

float total = 0.0;
int count = 0;
int tax_percent = 6;

float add_with_tax(float f) {
  float tax_rate = 1 + tax_percent / 100.0;
  total = total + f * tax_rate;
  count = count + 1;

  return total;
}

int main() {
  float val;
  
  printf("Price of item: ");

  while (scanf("%f", &val) == 1) {
    printf("Total so far: %.2f\n", add_with_tax(val));
  }

  printf("Price of item: ");
  printf("\nFinal total: %.2f\n", total);
  printf("Number of items: %i\n", count);

  return 0;
}
