#include "item.h"

int* preencheVetor(FILE *arq, int* numero, int N){
    int i = 0;
    char info[20];

    while( (fgets(info, sizeof(info), arq)) != NULL && i < N){
        numero[i] = atoi(info);
        //printf("%d\n", numero[i]);
        i++;
    }

    return numero;

}

void printVetor(int* vet, int N){
    for(int i; i < N; i++){
        printf("%d ", vet[i] );
    }

    printf("\n\n");
}
