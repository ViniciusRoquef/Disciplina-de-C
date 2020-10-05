#include <stdio.h>
#include <string.h>

int main() {
  char a[10],b[10];
  int return;
  printf("Digite uma cor, por gentileza: ");
  gets(a);
  printf("Sua cor preferida e: ");
  gets(b);

  if(strcmp(b,a)){
    printf("\nDiferente: ");}
  else{
    printf("\nIgual: ");
    }
    printf("Retorno = %d \n", return);
return 0;
}
