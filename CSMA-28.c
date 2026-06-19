e<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-28 - Soma dos 100 Primeiros Número Naturais * ");
    printf("\n**************************************************************************************** \n");
 
   int i, soma = 0;

    for(i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("A soma e: %d\n", soma);

    return 0;
}
