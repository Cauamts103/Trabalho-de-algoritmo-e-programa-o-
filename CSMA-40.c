#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-40 - Tabuada com while  * ");
    printf("\n**************************************************************************************** \n");
 
  int numero, contador = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (contador <= 10) {
        printf("%d x %d = %d\n", numero, contador, numero * contador);
        contador++;
    }

    return 0;
}
