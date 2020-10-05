#include <stdio.h>
#include <string.h>

int main() {
struct ficha_aluno {
  char nome[30];
  int numero;
  float nota;
  };
  struct ficha_aluno aluno;
  printf("\n-----------Cadastro de aluno-----------\n");
  printf("Nome aluno: ");
  fgets(aluno.nome,30, stdin);

  printf("Digite o numero: ");
  scanf("%d", &aluno.nome);

  printf("Digite a nota do aluno: ");
  scanf("%f", &aluno.numero);

return 0;
}
