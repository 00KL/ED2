#include <stdio.h>
#include <stdlib.h>

typedef struct abb {
    int valor;
    abb* esq;
    abb* dir;
}abb;

abb* criaArvore();

abb* addNo(int);

void liberaAbb(abb*);
