#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ano;
      printf("Digite um ano:");
      scanf("%d", &ano);
    if(ano % 400 == 0) {
        printf("O ano que voce digitou e bissexto!");
    } else if((ano % 4 == 0) && (ano % 100!=0)) {
        printf("O ano e bissexto");
    } else {
        printf("Este ano nao e bissexto!");
    }
    return 0;
}
