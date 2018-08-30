#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>



typedef struct abb {
    int valor;
    struct abb* esq;
    struct abb* dir;
}abb;

abb* criaArvore();

abb* radomAbb(abb*, int);

abb* addNo(abb*, int);

void percorre(abb*, void (*callback)(abb*) );

void liberaAbb(abb*);

int alturaAbb(abb*);

//formas de percorrer
void pre_order(abb*);
void in_order(abb*);
void pos_order(abb*);
