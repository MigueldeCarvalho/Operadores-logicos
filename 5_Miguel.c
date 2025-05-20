#include <stdio.h>

int main(int argc, char const *argv[]){

    int numero1, numero2;

    printf("Digite o primeiro número inteiro");
    scanf("%d", &numero1);

    printf("Digite o segundo número inteiro");
    scanf("%d", &numero2);

    if(numero1 % numero2 == 0 || numero2 % numero1 == 0){
        printf("Um numero é multiplo do outro");
    }else{
        printf("Os números não são multiplos");
    }

    return 0;
}