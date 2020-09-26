#include <stdio.h>

int main() {
    int pa = 0;
    int quantidade, razao;

    printf ("Digite o numero da sua PA: ");
    scanf ("%d", &quantidade);
    printf ("Digite a razao da PA: ");
    scanf ("%d", &razao);

    for (int i = 1; i <= quantidade; i++) {
        if(i == quantidade){
            printf ("%d!", pa);
            break;
        }
        printf ("%d, ", pa);
        pa += razao;
    }
    return 0;
}
