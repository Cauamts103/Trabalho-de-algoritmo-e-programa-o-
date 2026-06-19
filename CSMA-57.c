#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA- 57 - A Central do Brinquedo Eletrônico ");
    printf("\n**************************************************************************************** \n");
    
   int opcao;

    char cor[20];

    printf("Digite a cor: ");
    scanf("%s", cor);

    if (strcmp(cor, "Verde") == 0) {
        printf("O urso diz: Vamos brincar la fora!\n");
    }
    else if (strcmp(cor, "Amarelo") == 0) {
        printf("O urso diz: Estou ficando com soninho...\n");
    }
    else if (strcmp(cor, "Vermelho") == 0) {
        printf("O urso diz: Estou com fome, hora do lanche!\n");
    }
    else {
        printf("Cor desconhecida!\n");
    }

    return 0;
}
