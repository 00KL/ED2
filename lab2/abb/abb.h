#include <stdio.h>
#include <stdlib.h>

typedef struct abb {
    int valor;
    struct abb* esq;
    struct abb* dir;
}abb;

abb* criaArvore();

abb* addNo(abb*, int);

void printAbb(abb*);

void liberaAbb(abb*);
