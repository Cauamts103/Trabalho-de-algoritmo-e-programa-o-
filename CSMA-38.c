#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n**************************************************************************************** ");
    printf("\n* Aluno: Cauã da Silva de Matos Alves - RA:0027026 *");
    printf("\n* Programa CSMA-38 - 	Soma Correta  * ");
    printf("\n**************************************************************************************** \n");
 
  int senha, senhaCorreta = 1234;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != senhaCorreta) {
        printf("Senha incorreta! Tente novamente: ");
        scanf("%d", &senha);
    }

    printf("Acesso liberado!\n");

    return 0;
}
