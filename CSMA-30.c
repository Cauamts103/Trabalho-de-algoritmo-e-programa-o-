#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-30 - Fatorial de um Número * ");
    printf("\n**************************************************************************************** \n");
 
  int num, i;
    long long fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        fatorial *= i;
    }

    printf("Fatorial de %d = %lld\n", num, fatorial);

    return 0;
}
