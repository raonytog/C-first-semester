#include <stdio.h>
#include <math.h>

int main () {
  float altura, largura, total;
  scanf("%f %f", &altura, &largura);
  total = ((altura*2) + (largura*2));
  printf("%.2f", total);
  return 0;
}
