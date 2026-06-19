#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-24 - Pode Voltar? * ");
    printf("\n**************************************************************************************** \n");
 
 int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16) {
        printf("Pode votar.\n");
    } else {
        printf("Nao pode votar.\n");
    }

    return 0;
}
