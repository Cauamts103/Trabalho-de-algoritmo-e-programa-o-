#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA- 59 - O Assistente de Direção (GPS Sem Mapa ) ");
    printf("\n**************************************************************************************** \n");

    char direcao;

    printf("Digite uma letra (N, S, L ou O): ");
    scanf(" %c", &direcao);

    switch(direcao) {
        case 'N':
            printf("Seguir para o Norte.\n");
            break;

        case 'S':
            printf("Seguir para o Sul.\n");
            break;

        case 'L':
            printf("Virar a Leste (Direita).\n");
            break;

        case 'O':
            printf("Virar a Oeste (Esquerda).\n");
            break;

        default:
            printf("Comando invalido! Pare o robo.\n");
    }

    return 0;
}
