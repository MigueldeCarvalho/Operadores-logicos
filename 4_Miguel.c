#include <stdio.h>

int main(int argc, char const *argv[]){

    int numero;

    printf("Digite um número inteiro\n");
    scanf("%d", &numero);

    if(numero % 5 == 0 && numero % 3 == 0){
        printf("O numero é divisivel por 5 e por 3 ao mesmo tempo");
    }else{
        printf("O numero não é divisivel por 5 e por 3");
    }

    return 0;

}