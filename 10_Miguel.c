#include <stdio.h>

int main(int argc, char const *argv[]){

    int usuariologado, horaatual, fraude;
    char status;
    float saldo;

    printf("Escreva 1 se o usuario esta logado, 0 caso contrario:\n");
    scanf("%d", &usuariologado);

    printf("Escreva o status da conta (A - ativa, I - inativa):\n");
    scanf(" %c", &status);

    printf("Escreva o saldo da conta:\n");
    scanf("%f", &saldo);

    printf("Escreva a hora atual (0-23):\n");
    scanf("%d", &horaatual);

    printf("Escreva 1 se houve tentativa de fraude, 0 caso não tenha:\n");
    scanf("%d", &fraude);

    if (usuariologado == 1 && status == 'A' && saldo > 1000.00 && horaatual >= 8 && horaatual <= 18 && fraude == 0){
        printf("Liberado o seu acesso para a operacao especial\n");
    }else{
        printf("Negado o seu acesso para a operacao especial\n");
    }

    return 0;
}