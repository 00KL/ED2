#include "sort.h"

Item main(int argc, char* argv[]){
    FILE *arq = fopen(argv[2], "r");
    Item N = atoi(argv[1]);
    Item *numero =  (Item*)malloc( N * sizeof(Item));

    if(arq == NULL){
        printf("ERRO\n\n");
        exit(1);
    }
    else{
        numero = preencheVetor(arq, numero, N);
    }

    printVetor(numero, N);
    sort(numero, 0, N);
    printVetor(numero, N);

    free(numero);
    fclose(arq);

    return 0;

}
