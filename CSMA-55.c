#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA- 55 - Ler números e mostrar o maior (até digitar negativo) ");
    printf("\n**************************************************************************************** \n");
    
  int numero, maior = 0;

    do {
        printf("Digite um numero (negativo para sair): ");
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }

    } while (numero >= 0);

    printf("Maior numero informado: %d\n", maior);

    return 0;
}
