#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  int fat, n;
  printf ("Digite um numero para saber seu fatorial:");
  scanf("%d", &n);
  for(fat = 1; n > 1; n = n - 1) {
    fat = fat * n;
  }
  printf("\n%d", fat);
return 0;
}
