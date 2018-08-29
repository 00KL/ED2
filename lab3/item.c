#include "item.h"

int* preencheVetor(FILE *arq, int* numero){
    int i = 0;
    char info[20];

    while( (fgets(info, sizeof(info), arq)) != NULL){
        numero[i] = atoi(info);
        printf("%d\n", numero[i]);
        i++;
    }

    return numero;

}
