#include "item.h"

int main(int argc, char* argv[]){
    FILE *arq = fopen(argv[2], "r");
    int N = atoi(argv[1]);
    int *numero =  (int*)malloc( N * sizeof(int));

    if(arq == NULL){
        printf("ERRO\n\n");
    }
    else{
        numero = preencheVetor(arq, numero, N);
    }

    printVetor(numero, N);
    

    free(numero);
    fclose(arq);

    return 0;

}
