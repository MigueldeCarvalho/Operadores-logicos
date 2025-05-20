#include <stdio.h>

int main(int argc, char const *argv[]){

    int idade;
    int documento_foto;

    printf("Qual sua idade?\n");
    scanf("%d", &idade);
    printf("Possui documento com foto?\n");
    scanf("%d", &documento_foto);

    if(documento_foto == 1, idade >= 18)
    {
        printf("Sim possui documento com foto");
    }else{

        printf("Não possui documento com foto");
    }

    return 0;
    
}