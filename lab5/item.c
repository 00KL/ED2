#include "item.h"
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>//necessário p/ função time()


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
    for(int i = 0; i < N; i++){
        printf("%d ", vet[i] );
    }

    printf("\n\n");
}

int* preencheRandom( int* numero, int N){
    int i = 0;

    srand(time(NULL));

    for(i= 0; i < N; i++){
        numero[i] = rand()%(N*10);
    }

    return numero;

}
