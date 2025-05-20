#include <stdio.h>

int main(int argc, char const *argv[]){

    int numero;

    printf("Insira um numero?\n");
    scanf("%d", &numero);

    if(numero >10, numero <20){
        printf("Sim esse numero está entre 10 e 20");
    }else{
        printf("Esse numero não está entre os 10 e 20");
    }

    return 0;
}