#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-45 - Menu até escolhersair(c) * ");
    printf("\n**************************************************************************************** \n");
    
 int opcao = 0;

    while (opcao != 4) {
        printf("\n=== MENU ===\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Consulta de saldo.\n");
        } else if (opcao == 2) {
            printf("Deposito realizado.\n");
        } else if (opcao == 3) {
            printf("Saque realizado.\n");
        } else if (opcao == 4) {
            printf("Encerrando o programa...\n");
        } else {
            printf("Opcao invalida!\n");
        }
    }

    return 0;
}
