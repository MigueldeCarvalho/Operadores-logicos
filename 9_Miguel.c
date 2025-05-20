#include <stdio.h>

int main(int argc, char const *argv[]){

    int lado1, lado2, lado3;

    printf("Digite o primeiro lado do triângulo:\n");
    scanf("%d", &lado1);

    printf("Digite o segundo lado do triângulo:\n");
    scanf("%d", &lado2);

    printf("Digite o terceiro lado do triângulo:\n");
    scanf("%d", &lado3);

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){
        if (lado1 == lado2 && lado2 == lado3){
            printf("Os lados formam um triângulo equilátero\n");
        }else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
            printf("Os lados formam um triângulo isósceles\n");
        }else{
            printf("Os lados formam um triângulo escaleno\n");
        }
    }else{
        printf("Os lados não formam um triângulo\n");
    }

    return 0;
}