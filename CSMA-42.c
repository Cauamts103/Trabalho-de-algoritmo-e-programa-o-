#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-42 - Quantidade de números ímpares digitados * ");
    printf("\n**************************************************************************************** \n");
    
  int numero, contador = 1, impares = 0;

    while (contador <= 10) {
        printf("Digite o %d numero: ", contador);
        scanf("%d", &numero);

        if (numero % 2 != 0) {
            impares++;
        }

        contador++;
    }

    printf("Quantidade de numeros impares: %d\n", impares);

    return 0;
}
