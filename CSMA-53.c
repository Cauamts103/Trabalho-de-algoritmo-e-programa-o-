#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA- 53 - Confirmar saída com 's' * ");
    printf("\n**************************************************************************************** \n");
    
  char sair;

    do {
        printf("Executando operacao...\n");

        printf("Deseja sair? (s para sair): ");
        scanf(" %c", &sair);

    } while (sair != 's');

    printf("Programa encerrado!\n");

    return 0;
}
