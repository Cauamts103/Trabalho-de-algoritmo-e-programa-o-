#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã Da Silva - RA:0027026 *");
    printf("\n* Programa JPA-15 - Quantas caixas cabem dentro do caminhão * ");
    printf("\n**************************************************************************************** \n");
 
    float altCam, larCam, compCam;
    float altCx, larCx, compCx;

    printf("Altura do caminhao: ");
    scanf("%f", &altCam);

    printf("Largura do caminhao: ");
    scanf("%f", &larCam);

    printf("Comprimento do caminhao: ");
    scanf("%f", &compCam);

    printf("Altura da caixa: ");
    scanf("%f", &altCx);

    printf("Largura da caixa: ");
    scanf("%f", &larCx);

    printf("Comprimento da caixa: ");
    scanf("%f", &compCx);

    int qtd = (altCam/altCx) * (larCam/larCx) * (compCam/compCx);

    printf("Quantidade de caixas: %d", qtd);

    return 0;
}
