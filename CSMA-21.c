#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-21 - Número positivo ou negativo * ");
    printf("\n**************************************************************************************** \n");
 
float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero > 0) {
        printf("Numero positivo.\n");
    }
    else if (numero < 0) {
        printf("Numero negativo.\n");
    }
    else {
        printf("Numero igual a zero.\n");
    }

    return 0;
}
