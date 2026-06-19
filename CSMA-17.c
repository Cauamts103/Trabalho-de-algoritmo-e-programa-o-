#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-17 -   O Sensor do Parque Temático * ");
    printf("\n**************************************************************************************** \n");
 

    float altura;

    printf("Digite a altura da crianca (cm): ");
    scanf("%f", &altura);

    if (altura >= 140) {
        printf("LIBERADO - Luz Verde\n");
    }
    else {
        printf("BARRADO - Luz Vermelha\n");
    }

    return 0;
}
