#include "item.h"

int main(int argc, char* argv[]){
    FILE *arq = fopen(argv[2], "r");
    int numero[ atoi(argv[1]) ], i = 0;

    if(arq == NULL){
        printf("ERRO\n\n");
    }
    else{
        numero = preencheVetor(arq, numero);
    }


    fclose(arq);

    return 0;

}
