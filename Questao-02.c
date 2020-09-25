#include <stdio.h>
#include <stdlib.h>

int main (){
  int numero = 28;
    printf("Ola, se voce digitar o numero 28, voce sabera se ele e par ou impar, digiti-o:");
    scanf("%d", &numero);
    if(numero) {
      printf (" \nEle e um numero par!\n ");
    } else {
      printf ("opcao invalida");
    }
return 0;
}
