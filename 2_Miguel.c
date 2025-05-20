#include <stdio.h>

int main(int argc, char const *argv[]){

    int idade;
    int acomp_respon;

    printf("Qual sua idade?\n");
    scanf("%d", &idade);
    printf("Está acompanhado de um responsável?\n");
    scanf("%d", &acomp_respon);

    if(idade > 12 || acomp_respon == 1){
        printf("Sim está acompanhado de um responsável");
    }else{
        printf("Não esta acompanhado de um responsável");
    }

    return 0;

}
