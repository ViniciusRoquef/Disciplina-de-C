#include <stdio.h>
#include <stdlib.h>

int main() {
  int input = 0;
  do {
    printf (" Digite um numeor de 1 a 9\n Caso queira encerrar o programa, digite 0./n");
    scanf("%d", &input);
    switch(input) {
      case 0:
        printf(" Programa encerrado, obrigado por participar!/n ");
        return 0;
      case 1:
        printf("Legal, voce esta indo bem! Se deseja continuar, digite um numero de 1 a 9, caso contrario digite 0.\n");
        break;
      case 2:
        printf("Legal, voce esta indo bem! Se deseja continuar, digite um numero de 1 a 9, caso contrario digite 0.\n");
        break;
      case 3:
        printf("Legal, voce esta indo bem! Se deseja continuar, digite um numero de 1 a 9, caso contrario digite 0.\n");
        break;
      case 4:
        printf("Legal, voce esta indo bem! Se deseja continuar, digite um numero de 1 a 9, caso contrario digite 0.\n");
        break;
      case 5:
        printf("Legal, voce esta indo bem! Se deseja continuar, digite um numero de 1 a 9, caso contrario digite 0.\n");
        break;
      case 6:
        printf("Legal, voce esta indo bem! Se deseja continuar, digite um numero de 1 a 9, caso contrario digite 0.\n");
        break;
      case 7:
        printf("Legal, voce esta indo bem! Se deseja continuar, digite um numero de 1 a 9, caso contrario digite 0.\n");
        break;
      case 8:
        printf("Legal, voce esta indo bem! Se deseja continuar, digite um numero de 1 a 9, caso contrario digite 0.\n");
        break;
      case 9:
        printf("Legal, voce esta indo bem! Se deseja continuar, digite um numero de 1 a 9, caso contrario digite 0.\n");
        break;
      default:
        printf ("\nNumero invalido, tente novamente digitando um numero de 1 a 9.");
      }
    } while(input != 0);
return 0;
}
